#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030E680
// Address: 0x30e680 - 0x30e6f8
void sub_0030E680_0x30e680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E680_0x30e680");
#endif

    switch (ctx->pc) {
        case 0x30e6c0u: goto label_30e6c0;
        case 0x30e6d0u: goto label_30e6d0;
        case 0x30e6ecu: goto label_30e6ec;
        default: break;
    }

    ctx->pc = 0x30e680u;

    // 0x30e680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30e680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30e684: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x30e684u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x30e688: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30e688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30e68c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x30e68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x30e690: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x30e690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x30e694: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x30e694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30e698: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x30e698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30e69c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30e69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30e6a0: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x30e6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x30e6a4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x30e6a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x30e6a8: 0x34420fda  ori         $v0, $v0, 0xFDA
    ctx->pc = 0x30e6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4058);
    // 0x30e6ac: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x30e6acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30e6b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30E6B0u;
    {
        const bool branch_taken_0x30e6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E6B0u;
        // 0x30e6b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e6b0) {
            ctx->pc = 0x30E6C8u;
            goto label_30e6c8;
        }
    }
    ctx->pc = 0x30E6B8u;
    // 0x30e6b8: 0xc0c3766  jal         func_30DD98
    ctx->pc = 0x30E6B8u;
    SET_GPR_U32(ctx, 31, 0x30E6C0u);
    ctx->pc = 0x30E6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E6B8u;
    // 0x30e6bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30DD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30DD98u, 0x30E6B8u, 0x30E6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E6C0u;
label_30e6c0:
    // 0x30e6c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x30E6C0u;
    {
        const bool branch_taken_0x30e6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E6C0u;
        // 0x30e6c4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e6c0) {
            ctx->pc = 0x30E6F0u;
            goto label_30e6f0;
        }
    }
    ctx->pc = 0x30E6C8u;
label_30e6c8:
    // 0x30e6c8: 0xc0c3396  jal         func_30CE58
    ctx->pc = 0x30E6C8u;
    SET_GPR_U32(ctx, 31, 0x30E6D0u);
    ctx->pc = 0x30CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CE58u, 0x30E6C8u, 0x30E6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E6D0u;
label_30e6d0:
    // 0x30e6d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30e6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e6d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30e6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30e6d8: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x30e6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30e6dc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x30e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x30e6e0: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x30e6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x30e6e4: 0xc0c3766  jal         func_30DD98
    ctx->pc = 0x30E6E4u;
    SET_GPR_U32(ctx, 31, 0x30E6ECu);
    ctx->pc = 0x30E6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E6E4u;
    // 0x30e6e8: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30DD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30DD98u, 0x30E6E4u, 0x30E6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E6ECu;
label_30e6ec:
    // 0x30e6ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30e6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_30e6f0:
    // 0x30e6f0: 0x3e00008  jr          $ra
    ctx->pc = 0x30E6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E6F0u;
        // 0x30e6f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E6F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E6F8u;
}
