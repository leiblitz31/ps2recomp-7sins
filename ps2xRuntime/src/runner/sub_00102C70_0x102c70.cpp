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

// Function: sub_00102C70
// Address: 0x102c70 - 0x102d20
void sub_00102C70_0x102c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102C70_0x102c70");
#endif

    switch (ctx->pc) {
        case 0x102ce0u: goto label_102ce0;
        case 0x102d00u: goto label_102d00;
        default: break;
    }

    ctx->pc = 0x102c70u;

    // 0x102c70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x102c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x102c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102c78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x102c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x102c7c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x102c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x102c80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102c84: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x102C84u;
    {
        const bool branch_taken_0x102c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x102c84) {
            ctx->pc = 0x102D00u;
            goto label_102d00;
        }
    }
    ctx->pc = 0x102C8Cu;
    // 0x102c8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102c90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x102c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x102c94: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x102C94u;
    {
        const bool branch_taken_0x102c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x102c94) {
            ctx->pc = 0x102CE0u;
            goto label_102ce0;
        }
    }
    ctx->pc = 0x102C9Cu;
    // 0x102c9c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x102c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102ca0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x102ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102ca4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102ca8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x102ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x102cac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102cb0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x102cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x102cb4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x102cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102cb8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x102cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x102cbc: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x102cbcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x102cc0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x102CC0u;
    {
        const bool branch_taken_0x102cc0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x102cc0) {
            ctx->pc = 0x102CD0u;
            goto label_102cd0;
        }
    }
    ctx->pc = 0x102CC8u;
    // 0x102cc8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x102cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x102ccc: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x102cccu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_102cd0:
    // 0x102cd0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x102cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x102cd4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x102cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x102cd8: 0xc042458  jal         func_109160
    ctx->pc = 0x102CD8u;
    SET_GPR_U32(ctx, 31, 0x102CE0u);
    ctx->pc = 0x109160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109160u, 0x102CD8u, 0x102CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102CE0u;
label_102ce0:
    // 0x102ce0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x102ce0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102ce4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x102ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x102ce8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x102ce8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x102cec: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x102CECu;
    {
        const bool branch_taken_0x102cec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x102cec) {
            ctx->pc = 0x102D00u;
            goto label_102d00;
        }
    }
    ctx->pc = 0x102CF4u;
    // 0x102cf4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x102cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102cf8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x102CF8u;
    SET_GPR_U32(ctx, 31, 0x102D00u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x102CF8u, 0x102D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102D00u;
label_102d00:
    // 0x102d00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102d04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x102d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102d08: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x102d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x102d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x102D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102D14u;
    // 0x102d14: 0x0  nop
    ctx->pc = 0x102d14u;
    // NOP
    // 0x102d18: 0x0  nop
    ctx->pc = 0x102d18u;
    // NOP
    // 0x102d1c: 0x0  nop
    ctx->pc = 0x102d1cu;
    // NOP
    ctx->pc = 0x102d20u;
}
