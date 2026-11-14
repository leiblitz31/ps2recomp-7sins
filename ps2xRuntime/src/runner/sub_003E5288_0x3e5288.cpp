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

// Function: sub_003E5288
// Address: 0x3e5288 - 0x3e5310
void sub_003E5288_0x3e5288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E5288_0x3e5288");
#endif

    switch (ctx->pc) {
        case 0x3e52c8u: goto label_3e52c8;
        case 0x3e52e8u: goto label_3e52e8;
        case 0x3e52f8u: goto label_3e52f8;
        default: break;
    }

    ctx->pc = 0x3e5288u;

    // 0x3e5288: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3e5288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3e528c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3e528cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3e5290: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3e5290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3e5294: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3e5294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5298: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e5298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3e529c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3e529cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e52a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e52a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e52a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3e52a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e52a8: 0x2e220300  sltiu       $v0, $s1, 0x300
    ctx->pc = 0x3e52a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)768) ? 1 : 0);
    // 0x3e52ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E52ACu;
    {
        const bool branch_taken_0x3e52ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E52B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E52ACu;
        // 0x3e52b0: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e52ac) {
            ctx->pc = 0x3E52C8u;
            goto label_3e52c8;
        }
    }
    ctx->pc = 0x3E52B4u;
    // 0x3e52b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3e52b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e52b8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3e52b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3e52bc: 0x24a5e450  addiu       $a1, $a1, -0x1BB0
    ctx->pc = 0x3e52bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960208));
    // 0x3e52c0: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3E52C0u;
    SET_GPR_U32(ctx, 31, 0x3E52C8u);
    ctx->pc = 0x3E52C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E52C0u;
    // 0x3e52c4: 0xac4000d0  sw          $zero, 0xD0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3E52C0u, 0x3E52C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E52C8u;
label_3e52c8:
    // 0x3e52c8: 0x2e020190  sltiu       $v0, $s0, 0x190
    ctx->pc = 0x3e52c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)400) ? 1 : 0);
    // 0x3e52cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E52CCu;
    {
        const bool branch_taken_0x3e52cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E52D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E52CCu;
        // 0x3e52d0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e52cc) {
            ctx->pc = 0x3E52E8u;
            goto label_3e52e8;
        }
    }
    ctx->pc = 0x3E52D4u;
    // 0x3e52d4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3e52d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3e52d8: 0x24a5e498  addiu       $a1, $a1, -0x1B68
    ctx->pc = 0x3e52d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960280));
    // 0x3e52dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e52dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e52e0: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3E52E0u;
    SET_GPR_U32(ctx, 31, 0x3E52E8u);
    ctx->pc = 0x3E52E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E52E0u;
    // 0x3e52e4: 0xac4000d0  sw          $zero, 0xD0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3E52E0u, 0x3E52E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E52E8u;
label_3e52e8:
    // 0x3e52e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e52e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e52ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3e52ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e52f0: 0xc0f8c5e  jal         func_3E3178
    ctx->pc = 0x3E52F0u;
    SET_GPR_U32(ctx, 31, 0x3E52F8u);
    ctx->pc = 0x3E52F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E52F0u;
    // 0x3e52f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3178u, 0x3E52F0u, 0x3E52F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E52F8u;
label_3e52f8:
    // 0x3e52f8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3e52f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e52fc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3e52fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e5300: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e5300u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e5304: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e5304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e5308: 0x3e00008  jr          $ra
    ctx->pc = 0x3E5308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5308u;
        // 0x3e530c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E5308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E5310u;
}
