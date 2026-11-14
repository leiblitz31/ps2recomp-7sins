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

// Function: sub_00213D50
// Address: 0x213d50 - 0x213e00
void sub_00213D50_0x213d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213D50_0x213d50");
#endif

    switch (ctx->pc) {
        case 0x213dc0u: goto label_213dc0;
        case 0x213de0u: goto label_213de0;
        default: break;
    }

    ctx->pc = 0x213d50u;

    // 0x213d50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x213d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x213d54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x213d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x213d58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x213d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x213d5c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x213d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x213d60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x213d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213d64: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x213D64u;
    {
        const bool branch_taken_0x213d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213d64) {
            ctx->pc = 0x213DE0u;
            goto label_213de0;
        }
    }
    ctx->pc = 0x213D6Cu;
    // 0x213d6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x213d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213d70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x213d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x213d74: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x213D74u;
    {
        const bool branch_taken_0x213d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213d74) {
            ctx->pc = 0x213DC0u;
            goto label_213dc0;
        }
    }
    ctx->pc = 0x213D7Cu;
    // 0x213d7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x213d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213d80: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x213d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213d84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x213d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213d88: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x213d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x213d8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x213d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213d90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x213d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x213d94: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x213d94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x213d98: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x213d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x213d9c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x213d9cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x213da0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x213DA0u;
    {
        const bool branch_taken_0x213da0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x213da0) {
            ctx->pc = 0x213DB0u;
            goto label_213db0;
        }
    }
    ctx->pc = 0x213DA8u;
    // 0x213da8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x213da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x213dac: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x213dacu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_213db0:
    // 0x213db0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x213db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x213db4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x213db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x213db8: 0xc08533c  jal         func_214CF0
    ctx->pc = 0x213DB8u;
    SET_GPR_U32(ctx, 31, 0x213DC0u);
    ctx->pc = 0x214CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214CF0u, 0x213DB8u, 0x213DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213DC0u;
label_213dc0:
    // 0x213dc0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x213dc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213dc4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x213dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x213dc8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x213dc8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x213dcc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x213DCCu;
    {
        const bool branch_taken_0x213dcc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x213dcc) {
            ctx->pc = 0x213DE0u;
            goto label_213de0;
        }
    }
    ctx->pc = 0x213DD4u;
    // 0x213dd4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x213dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213dd8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x213DD8u;
    SET_GPR_U32(ctx, 31, 0x213DE0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x213DD8u, 0x213DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213DE0u;
label_213de0:
    // 0x213de0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x213de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213de4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x213de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213de8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x213de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x213dec: 0x3e00008  jr          $ra
    ctx->pc = 0x213DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213DF4u;
    // 0x213df4: 0x0  nop
    ctx->pc = 0x213df4u;
    // NOP
    // 0x213df8: 0x0  nop
    ctx->pc = 0x213df8u;
    // NOP
    // 0x213dfc: 0x0  nop
    ctx->pc = 0x213dfcu;
    // NOP
    ctx->pc = 0x213e00u;
}
