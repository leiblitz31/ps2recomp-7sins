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

// Function: sub_0025A130
// Address: 0x25a130 - 0x25a1d0
void sub_0025A130_0x25a130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A130_0x25a130");
#endif

    switch (ctx->pc) {
        case 0x25a168u: goto label_25a168;
        case 0x25a178u: goto label_25a178;
        case 0x25a18cu: goto label_25a18c;
        case 0x25a19cu: goto label_25a19c;
        default: break;
    }

    ctx->pc = 0x25a130u;

    // 0x25a130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25a130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25a134: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25a134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25a138: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25a138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25a13c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25a13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25a140: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x25a140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x25a144: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x25a144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x25a148: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25a148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25a14c: 0x1002000a  beq         $zero, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25A14Cu;
    {
        const bool branch_taken_0x25a14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x25a14c) {
            ctx->pc = 0x25A178u;
            goto label_25a178;
        }
    }
    ctx->pc = 0x25A154u;
    // 0x25a154: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x25a154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x25a158: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x25a158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25a15c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x25a15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x25a160: 0xc085538  jal         func_2154E0
    ctx->pc = 0x25A160u;
    SET_GPR_U32(ctx, 31, 0x25A168u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x25A160u, 0x25A168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A168u;
label_25a168:
    // 0x25a168: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25a168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a16c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a170: 0xc09bb00  jal         func_26EC00
    ctx->pc = 0x25A170u;
    SET_GPR_U32(ctx, 31, 0x25A178u);
    ctx->pc = 0x26EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EC00u, 0x25A170u, 0x25A178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A178u;
label_25a178:
    // 0x25a178: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25a178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a17c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x25a17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x25a180: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x25a180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x25a184: 0xc085538  jal         func_2154E0
    ctx->pc = 0x25A184u;
    SET_GPR_U32(ctx, 31, 0x25A18Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x25A184u, 0x25A18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A18Cu;
label_25a18c:
    // 0x25a18c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25a18cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25a190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a194: 0xc09bbbc  jal         func_26EEF0
    ctx->pc = 0x25A194u;
    SET_GPR_U32(ctx, 31, 0x25A19Cu);
    ctx->pc = 0x26EEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EEF0u, 0x25A194u, 0x25A19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A19Cu;
label_25a19c:
    // 0x25a19c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x25a19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a1a0: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x25a1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x25a1a4: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x25a1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x25a1a8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x25a1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x25a1ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25a1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a1b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25a1b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a1b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25a1b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a1b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25a1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25a1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x25A1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A1C4u;
    // 0x25a1c4: 0x0  nop
    ctx->pc = 0x25a1c4u;
    // NOP
    // 0x25a1c8: 0x0  nop
    ctx->pc = 0x25a1c8u;
    // NOP
    // 0x25a1cc: 0x0  nop
    ctx->pc = 0x25a1ccu;
    // NOP
    ctx->pc = 0x25a1d0u;
}
