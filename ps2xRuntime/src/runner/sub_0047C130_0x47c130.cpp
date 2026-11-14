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

// Function: sub_0047C130
// Address: 0x47c130 - 0x47c1f0
void sub_0047C130_0x47c130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047C130_0x47c130");
#endif

    switch (ctx->pc) {
        case 0x47c154u: goto label_47c154;
        case 0x47c164u: goto label_47c164;
        case 0x47c174u: goto label_47c174;
        case 0x47c190u: goto label_47c190;
        case 0x47c19cu: goto label_47c19c;
        case 0x47c1acu: goto label_47c1ac;
        case 0x47c1ccu: goto label_47c1cc;
        default: break;
    }

    ctx->pc = 0x47c130u;

    // 0x47c130: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x47c130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x47c134: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x47c134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x47c138: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47c138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x47c13c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47c13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x47c140: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47c140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47c144: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x47c144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x47c148: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x47c148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47c14c: 0xc11eb80  jal         func_47AE00
    ctx->pc = 0x47C14Cu;
    SET_GPR_U32(ctx, 31, 0x47C154u);
    ctx->pc = 0x47AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47AE00u, 0x47C14Cu, 0x47C154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C154u;
label_47c154:
    // 0x47c154: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x47c154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c158: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x47c158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c15c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x47C15Cu;
    {
        const bool branch_taken_0x47c15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c15c) {
            ctx->pc = 0x47C1B4u;
            goto label_47c1b4;
        }
    }
    ctx->pc = 0x47C164u;
label_47c164:
    // 0x47c164: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x47c164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47c168: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x47c168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c16c: 0xc11eff0  jal         func_47BFC0
    ctx->pc = 0x47C16Cu;
    SET_GPR_U32(ctx, 31, 0x47C174u);
    ctx->pc = 0x47BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC0u, 0x47C16Cu, 0x47C174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C174u;
label_47c174:
    // 0x47c174: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x47c174u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47c178: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x47C178u;
    {
        const bool branch_taken_0x47c178 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c178) {
            ctx->pc = 0x47C1B0u;
            goto label_47c1b0;
        }
    }
    ctx->pc = 0x47C180u;
    // 0x47c180: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x47c180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47c184: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x47c184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c188: 0xc11eff0  jal         func_47BFC0
    ctx->pc = 0x47C188u;
    SET_GPR_U32(ctx, 31, 0x47C190u);
    ctx->pc = 0x47BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC0u, 0x47C188u, 0x47C190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C190u;
label_47c190:
    // 0x47c190: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x47c190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47c194: 0xc0e27ae  jal         func_389EB8
    ctx->pc = 0x47C194u;
    SET_GPR_U32(ctx, 31, 0x47C19Cu);
    ctx->pc = 0x389EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389EB8u, 0x47C194u, 0x47C19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C19Cu;
label_47c19c:
    // 0x47c19c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x47c19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47c1a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x47c1a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c1a4: 0xc11eff0  jal         func_47BFC0
    ctx->pc = 0x47C1A4u;
    SET_GPR_U32(ctx, 31, 0x47C1ACu);
    ctx->pc = 0x47BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC0u, 0x47C1A4u, 0x47C1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C1ACu;
label_47c1ac:
    // 0x47c1ac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x47c1acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_47c1b0:
    // 0x47c1b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x47c1b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_47c1b4:
    // 0x47c1b4: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x47c1b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x47c1b8: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x47C1B8u;
    {
        const bool branch_taken_0x47c1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47c1b8) {
            ctx->pc = 0x47C164u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47c164;
        }
    }
    ctx->pc = 0x47C1C0u;
    // 0x47c1c0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x47c1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47c1c4: 0xc11f07c  jal         func_47C1F0
    ctx->pc = 0x47C1C4u;
    SET_GPR_U32(ctx, 31, 0x47C1CCu);
    ctx->pc = 0x47C1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C1F0u, 0x47C1C4u, 0x47C1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C1CCu;
label_47c1cc:
    // 0x47c1cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x47c1ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c1d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x47c1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47c1d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47c1d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47c1d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47c1d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47c1dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47c1dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47c1e0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x47c1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x47c1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x47C1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47C1E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47C1ECu;
    // 0x47c1ec: 0x0  nop
    ctx->pc = 0x47c1ecu;
    // NOP
    ctx->pc = 0x47c1f0u;
}
