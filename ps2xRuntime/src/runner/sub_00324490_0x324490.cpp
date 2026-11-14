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

// Function: sub_00324490
// Address: 0x324490 - 0x324508
void sub_00324490_0x324490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324490_0x324490");
#endif

    switch (ctx->pc) {
        case 0x3244c8u: goto label_3244c8;
        case 0x3244e4u: goto label_3244e4;
        default: break;
    }

    ctx->pc = 0x324490u;

    // 0x324490: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x324490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x324494: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x324494u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x324498: 0x8c43b1f0  lw          $v1, -0x4E10($v0)
    ctx->pc = 0x324498u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61B1F0u));
    // 0x32449c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x32449cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x3244a0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3244a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3244a4: 0x24050114  addiu       $a1, $zero, 0x114
    ctx->pc = 0x3244a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    // 0x3244a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3244a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3244ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3244acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3244b0: 0xc38821  addu        $s1, $a2, $v1
    ctx->pc = 0x3244b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3244b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3244b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3244b8: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x3244b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x3244bc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3244bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3244c0: 0xc103404  jal         func_40D010
    ctx->pc = 0x3244C0u;
    SET_GPR_U32(ctx, 31, 0x3244C8u);
    ctx->pc = 0x3244C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3244C0u;
    // 0x3244c4: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x3244C0u, 0x3244C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3244C8u;
label_3244c8:
    // 0x3244c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3244C8u;
    {
        const bool branch_taken_0x3244c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3244CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3244C8u;
        // 0x3244cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3244c8) {
            ctx->pc = 0x3244F0u;
            goto label_3244f0;
        }
    }
    ctx->pc = 0x3244D0u;
    // 0x3244d0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3244d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3244d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3244d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3244d8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3244d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3244dc: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x3244DCu;
    SET_GPR_U32(ctx, 31, 0x3244E4u);
    ctx->pc = 0x3244E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3244DCu;
    // 0x3244e0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3244DCu, 0x3244E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3244E4u;
label_3244e4:
    // 0x3244e4: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x3244e4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x3244e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3244E8u;
    {
        const bool branch_taken_0x3244e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3244ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3244E8u;
        // 0x3244ec: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3244e8) {
            ctx->pc = 0x3244F4u;
            goto label_3244f4;
        }
    }
    ctx->pc = 0x3244F0u;
label_3244f0:
    // 0x3244f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3244f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3244f4:
    // 0x3244f4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3244f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3244f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3244f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3244fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3244fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324500: 0x3e00008  jr          $ra
    ctx->pc = 0x324500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324500u;
        // 0x324504: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324508u;
}
