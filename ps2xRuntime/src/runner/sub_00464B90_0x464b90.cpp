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

// Function: sub_00464B90
// Address: 0x464b90 - 0x464c40
void sub_00464B90_0x464b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00464B90_0x464b90");
#endif

    switch (ctx->pc) {
        case 0x464bb0u: goto label_464bb0;
        case 0x464c04u: goto label_464c04;
        default: break;
    }

    ctx->pc = 0x464b90u;

    // 0x464b90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x464b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x464b94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x464b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x464b98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x464b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x464b9c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x464b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x464ba0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x464ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x464ba4: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x464ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x464ba8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x464BA8u;
    {
        const bool branch_taken_0x464ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x464ba8) {
            ctx->pc = 0x464BBCu;
            goto label_464bbc;
        }
    }
    ctx->pc = 0x464BB0u;
label_464bb0:
    // 0x464bb0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x464bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464bb4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x464bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x464bb8: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x464bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_464bbc:
    // 0x464bbc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x464bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464bc0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x464BC0u;
    {
        const bool branch_taken_0x464bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x464bc0) {
            ctx->pc = 0x464BF0u;
            goto label_464bf0;
        }
    }
    ctx->pc = 0x464BC8u;
    // 0x464bc8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x464bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x464bcc: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x464bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x464bd0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x464bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x464bd4: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x464bd4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x464bd8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x464bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x464bdc: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x464bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x464be0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x464be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x464be4: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x464be4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x464be8: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
    ctx->pc = 0x464BE8u;
    {
        const bool branch_taken_0x464be8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x464be8) {
            ctx->pc = 0x464BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_464bb0;
        }
    }
    ctx->pc = 0x464BF0u;
label_464bf0:
    // 0x464bf0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x464bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464bf4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x464BF4u;
    {
        const bool branch_taken_0x464bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x464bf4) {
            ctx->pc = 0x464C28u;
            goto label_464c28;
        }
    }
    ctx->pc = 0x464BFCu;
    // 0x464bfc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x464BFCu;
    {
        const bool branch_taken_0x464bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x464bfc) {
            ctx->pc = 0x464C14u;
            goto label_464c14;
        }
    }
    ctx->pc = 0x464C04u;
label_464c04:
    // 0x464c04: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x464c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x464c08: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x464c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x464c0c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x464c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x464c10: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x464c10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
label_464c14:
    // 0x464c14: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x464c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x464c18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x464c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x464c1c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x464c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x464c20: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x464C20u;
    {
        const bool branch_taken_0x464c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x464c20) {
            ctx->pc = 0x464C04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_464c04;
        }
    }
    ctx->pc = 0x464C28u;
label_464c28:
    // 0x464c28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x464c28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464c2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x464c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x464c30: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x464c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x464c34: 0x3e00008  jr          $ra
    ctx->pc = 0x464C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x464C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x464C3Cu;
    // 0x464c3c: 0x0  nop
    ctx->pc = 0x464c3cu;
    // NOP
    ctx->pc = 0x464c40u;
}
