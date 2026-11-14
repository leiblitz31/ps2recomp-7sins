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

// Function: sub_002D1B70
// Address: 0x2d1b70 - 0x2d1c20
void sub_002D1B70_0x2d1b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1B70_0x2d1b70");
#endif

    switch (ctx->pc) {
        case 0x2d1be0u: goto label_2d1be0;
        case 0x2d1c00u: goto label_2d1c00;
        default: break;
    }

    ctx->pc = 0x2d1b70u;

    // 0x2d1b70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d1b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d1b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1b78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d1b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d1b7c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2d1b7cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2d1b80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d1b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1b84: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D1B84u;
    {
        const bool branch_taken_0x2d1b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1b84) {
            ctx->pc = 0x2D1C00u;
            goto label_2d1c00;
        }
    }
    ctx->pc = 0x2D1B8Cu;
    // 0x2d1b8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d1b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1b90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d1b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1b94: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D1B94u;
    {
        const bool branch_taken_0x2d1b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1b94) {
            ctx->pc = 0x2D1BE0u;
            goto label_2d1be0;
        }
    }
    ctx->pc = 0x2D1B9Cu;
    // 0x2d1b9c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d1b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1ba0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2d1ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1ba4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d1ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1ba8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2d1ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d1bac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d1bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1bb0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d1bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1bb4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2d1bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d1bb8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2d1bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d1bbc: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x2d1bbcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2d1bc0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1BC0u;
    {
        const bool branch_taken_0x2d1bc0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2d1bc0) {
            ctx->pc = 0x2D1BD0u;
            goto label_2d1bd0;
        }
    }
    ctx->pc = 0x2D1BC8u;
    // 0x2d1bc8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2d1bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2d1bcc: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2d1bccu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2d1bd0:
    // 0x2d1bd0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2d1bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2d1bd4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2d1bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d1bd8: 0xc0b638c  jal         func_2D8E30
    ctx->pc = 0x2D1BD8u;
    SET_GPR_U32(ctx, 31, 0x2D1BE0u);
    ctx->pc = 0x2D8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8E30u, 0x2D1BD8u, 0x2D1BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1BE0u;
label_2d1be0:
    // 0x2d1be0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2d1be0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1be4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d1be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d1be8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d1be8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d1bec: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1BECu;
    {
        const bool branch_taken_0x2d1bec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d1bec) {
            ctx->pc = 0x2D1C00u;
            goto label_2d1c00;
        }
    }
    ctx->pc = 0x2D1BF4u;
    // 0x2d1bf4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d1bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1bf8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2D1BF8u;
    SET_GPR_U32(ctx, 31, 0x2D1C00u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2D1BF8u, 0x2D1C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1C00u;
label_2d1c00:
    // 0x2d1c00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d1c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1c04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1c08: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d1c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d1c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1C14u;
    // 0x2d1c14: 0x0  nop
    ctx->pc = 0x2d1c14u;
    // NOP
    // 0x2d1c18: 0x0  nop
    ctx->pc = 0x2d1c18u;
    // NOP
    // 0x2d1c1c: 0x0  nop
    ctx->pc = 0x2d1c1cu;
    // NOP
    ctx->pc = 0x2d1c20u;
}
