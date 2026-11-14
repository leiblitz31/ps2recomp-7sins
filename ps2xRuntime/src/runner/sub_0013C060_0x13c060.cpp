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

// Function: sub_0013C060
// Address: 0x13c060 - 0x13c120
void sub_0013C060_0x13c060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C060_0x13c060");
#endif

    switch (ctx->pc) {
        case 0x13c090u: goto label_13c090;
        case 0x13c09cu: goto label_13c09c;
        case 0x13c0b8u: goto label_13c0b8;
        case 0x13c0ccu: goto label_13c0cc;
        default: break;
    }

    ctx->pc = 0x13c060u;

    // 0x13c060: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x13c060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x13c064: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13c064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13c068: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13c068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13c06c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13c070: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x13c070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x13c074: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x13c074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x13c078: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x13c078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x13c07c: 0xa3a70070  sb          $a3, 0x70($sp)
    ctx->pc = 0x13c07cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 7));
    // 0x13c080: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x13c080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13c084: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x13c084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13c088: 0xc04f068  jal         func_13C1A0
    ctx->pc = 0x13C088u;
    SET_GPR_U32(ctx, 31, 0x13C090u);
    ctx->pc = 0x13C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C1A0u, 0x13C088u, 0x13C090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C090u;
label_13c090:
    // 0x13c090: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13c090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c094: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x13C094u;
    {
        const bool branch_taken_0x13c094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c094) {
            ctx->pc = 0x13C0FCu;
            goto label_13c0fc;
        }
    }
    ctx->pc = 0x13C09Cu;
label_13c09c:
    // 0x13c09c: 0x108843  sra         $s1, $s0, 1
    ctx->pc = 0x13c09cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 16), 1));
    // 0x13c0a0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13c0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13c0a4: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x13c0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x13c0a8: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x13c0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x13c0ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13c0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c0b0: 0xc04f048  jal         func_13C120
    ctx->pc = 0x13C0B0u;
    SET_GPR_U32(ctx, 31, 0x13C0B8u);
    ctx->pc = 0x13C120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C120u, 0x13C0B0u, 0x13C0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C0B8u;
label_13c0b8:
    // 0x13c0b8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x13c0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13c0bc: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x13c0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13c0c0: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x13c0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13c0c4: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x13C0C4u;
    SET_GPR_U32(ctx, 31, 0x13C0CCu);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x13C0C4u, 0x13C0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C0CCu;
label_13c0cc:
    // 0x13c0cc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13C0CCu;
    {
        const bool branch_taken_0x13c0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c0cc) {
            ctx->pc = 0x13C0F8u;
            goto label_13c0f8;
        }
    }
    ctx->pc = 0x13C0D4u;
    // 0x13c0d4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x13c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x13c0d8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x13c0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x13c0dc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13c0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13c0e0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x13c0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13c0e4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x13c0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x13c0e8: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x13c0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x13c0ec: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x13c0ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13c0f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13C0F0u;
    {
        const bool branch_taken_0x13c0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c0f0) {
            ctx->pc = 0x13C0FCu;
            goto label_13c0fc;
        }
    }
    ctx->pc = 0x13C0F8u;
label_13c0f8:
    // 0x13c0f8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x13c0f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13c0fc:
    // 0x13c0fc: 0x1e00ffe7  bgtz        $s0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x13C0FCu;
    {
        const bool branch_taken_0x13c0fc = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x13c0fc) {
            ctx->pc = 0x13C09Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c09c;
        }
    }
    ctx->pc = 0x13C104u;
    // 0x13c104: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13c104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13c108: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13c108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c10c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13c10cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c110: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c114: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x13c114u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13c118: 0x3e00008  jr          $ra
    ctx->pc = 0x13C118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C120u;
}
