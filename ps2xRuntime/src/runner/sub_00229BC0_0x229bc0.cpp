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

// Function: sub_00229BC0
// Address: 0x229bc0 - 0x229c90
void sub_00229BC0_0x229bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229BC0_0x229bc0");
#endif

    switch (ctx->pc) {
        case 0x229becu: goto label_229bec;
        case 0x229bfcu: goto label_229bfc;
        case 0x229c3cu: goto label_229c3c;
        case 0x229c64u: goto label_229c64;
        default: break;
    }

    ctx->pc = 0x229bc0u;

    // 0x229bc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x229bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x229bc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x229bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x229bc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x229bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x229bcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x229bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x229bd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x229bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x229bd4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x229bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x229bd8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x229bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x229bdc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x229bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229be0: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x229be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x229be4: 0xc08a1a0  jal         func_228680
    ctx->pc = 0x229BE4u;
    SET_GPR_U32(ctx, 31, 0x229BECu);
    ctx->pc = 0x228680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228680u, 0x229BE4u, 0x229BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229BECu;
label_229bec:
    // 0x229bec: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x229becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229bf0: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x229bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    // 0x229bf4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x229BF4u;
    {
        const bool branch_taken_0x229bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229bf4) {
            ctx->pc = 0x229C4Cu;
            goto label_229c4c;
        }
    }
    ctx->pc = 0x229BFCu;
label_229bfc:
    // 0x229bfc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x229bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229c00: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x229c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229c04: 0x8c500028  lw          $s0, 0x28($v0)
    ctx->pc = 0x229c04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x229c08: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x229c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x229c0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x229C0Cu;
    {
        const bool branch_taken_0x229c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229c0c) {
            ctx->pc = 0x229C20u;
            goto label_229c20;
        }
    }
    ctx->pc = 0x229C14u;
    // 0x229c14: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x229c14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229c18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x229C18u;
    {
        const bool branch_taken_0x229c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229c18) {
            ctx->pc = 0x229C24u;
            goto label_229c24;
        }
    }
    ctx->pc = 0x229C20u;
label_229c20:
    // 0x229c20: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x229c20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229c24:
    // 0x229c24: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x229c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x229c28: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x229c28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x229c2c: 0x24a56e50  addiu       $a1, $a1, 0x6E50
    ctx->pc = 0x229c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28240));
    // 0x229c30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x229c30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229c34: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x229C34u;
    SET_GPR_U32(ctx, 31, 0x229C3Cu);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x229C34u, 0x229C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C3Cu;
label_229c3c:
    // 0x229c3c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x229c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229c40: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x229c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x229c44: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x229c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x229c48: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x229c48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_229c4c:
    // 0x229c4c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x229c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229c50: 0x8c520028  lw          $s2, 0x28($v0)
    ctx->pc = 0x229c50u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x229c54: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x229c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229c58: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x229c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x229c5c: 0xc08a118  jal         func_228460
    ctx->pc = 0x229C5Cu;
    SET_GPR_U32(ctx, 31, 0x229C64u);
    ctx->pc = 0x228460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228460u, 0x229C5Cu, 0x229C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229C64u;
label_229c64:
    // 0x229c64: 0x1642ffe5  bne         $s2, $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x229C64u;
    {
        const bool branch_taken_0x229c64 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x229c64) {
            ctx->pc = 0x229BFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229bfc;
        }
    }
    ctx->pc = 0x229C6Cu;
    // 0x229c6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x229c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x229c70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x229c70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229c74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x229c74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229c78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x229c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229c7c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x229c7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x229c80: 0x3e00008  jr          $ra
    ctx->pc = 0x229C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229C88u;
    // 0x229c88: 0x0  nop
    ctx->pc = 0x229c88u;
    // NOP
    // 0x229c8c: 0x0  nop
    ctx->pc = 0x229c8cu;
    // NOP
    ctx->pc = 0x229c90u;
}
