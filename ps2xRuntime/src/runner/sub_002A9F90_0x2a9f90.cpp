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

// Function: sub_002A9F90
// Address: 0x2a9f90 - 0x2aa050
void sub_002A9F90_0x2a9f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9F90_0x2a9f90");
#endif

    switch (ctx->pc) {
        case 0x2a9fbcu: goto label_2a9fbc;
        case 0x2a9fd8u: goto label_2a9fd8;
        case 0x2a9fe8u: goto label_2a9fe8;
        case 0x2aa008u: goto label_2aa008;
        case 0x2aa024u: goto label_2aa024;
        case 0x2aa034u: goto label_2aa034;
        default: break;
    }

    ctx->pc = 0x2a9f90u;

    // 0x2a9f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a9f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a9f94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a9f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a9f98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a9f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2a9f9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a9f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9fa0: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x2a9fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2a9fa4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A9FA4u;
    {
        const bool branch_taken_0x2a9fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9fa4) {
            ctx->pc = 0x2A9FE8u;
            goto label_2a9fe8;
        }
    }
    ctx->pc = 0x2A9FACu;
    // 0x2a9fac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a9facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9fb0: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a9fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2a9fb4: 0xc09f9f0  jal         func_27E7C0
    ctx->pc = 0x2A9FB4u;
    SET_GPR_U32(ctx, 31, 0x2A9FBCu);
    ctx->pc = 0x27E7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E7C0u, 0x2A9FB4u, 0x2A9FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9FBCu;
label_2a9fbc:
    // 0x2a9fbc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A9FBCu;
    {
        const bool branch_taken_0x2a9fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9fbc) {
            ctx->pc = 0x2A9FE8u;
            goto label_2a9fe8;
        }
    }
    ctx->pc = 0x2A9FC4u;
    // 0x2a9fc4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a9fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9fc8: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a9fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2a9fcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a9fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9fd0: 0xc0aa814  jal         func_2AA050
    ctx->pc = 0x2A9FD0u;
    SET_GPR_U32(ctx, 31, 0x2A9FD8u);
    ctx->pc = 0x2AA050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA050u, 0x2A9FD0u, 0x2A9FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9FD8u;
label_2a9fd8:
    // 0x2a9fd8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a9fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9fdc: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a9fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2a9fe0: 0xc0a62cc  jal         func_298B30
    ctx->pc = 0x2A9FE0u;
    SET_GPR_U32(ctx, 31, 0x2A9FE8u);
    ctx->pc = 0x298B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298B30u, 0x2A9FE0u, 0x2A9FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9FE8u;
label_2a9fe8:
    // 0x2a9fe8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a9fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9fec: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x2a9fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2a9ff0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A9FF0u;
    {
        const bool branch_taken_0x2a9ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9ff0) {
            ctx->pc = 0x2AA034u;
            goto label_2aa034;
        }
    }
    ctx->pc = 0x2A9FF8u;
    // 0x2a9ff8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a9ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9ffc: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x2a9ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2aa000: 0xc09f9f0  jal         func_27E7C0
    ctx->pc = 0x2AA000u;
    SET_GPR_U32(ctx, 31, 0x2AA008u);
    ctx->pc = 0x27E7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E7C0u, 0x2AA000u, 0x2AA008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA008u;
label_2aa008:
    // 0x2aa008: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2AA008u;
    {
        const bool branch_taken_0x2aa008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa008) {
            ctx->pc = 0x2AA034u;
            goto label_2aa034;
        }
    }
    ctx->pc = 0x2AA010u;
    // 0x2aa010: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2aa010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa014: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x2aa014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2aa018: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aa018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa01c: 0xc0aa814  jal         func_2AA050
    ctx->pc = 0x2AA01Cu;
    SET_GPR_U32(ctx, 31, 0x2AA024u);
    ctx->pc = 0x2AA050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA050u, 0x2AA01Cu, 0x2AA024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA024u;
label_2aa024:
    // 0x2aa024: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2aa024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa028: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x2aa028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2aa02c: 0xc0a62cc  jal         func_298B30
    ctx->pc = 0x2AA02Cu;
    SET_GPR_U32(ctx, 31, 0x2AA034u);
    ctx->pc = 0x298B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298B30u, 0x2AA02Cu, 0x2AA034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA034u;
label_2aa034:
    // 0x2aa034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aa034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa038: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aa038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa03c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2aa03cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2aa040: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA048u;
    // 0x2aa048: 0x0  nop
    ctx->pc = 0x2aa048u;
    // NOP
    // 0x2aa04c: 0x0  nop
    ctx->pc = 0x2aa04cu;
    // NOP
    ctx->pc = 0x2aa050u;
}
