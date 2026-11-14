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

// Function: sub_0026FC70
// Address: 0x26fc70 - 0x26fd20
void sub_0026FC70_0x26fc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FC70_0x26fc70");
#endif

    switch (ctx->pc) {
        case 0x26fce0u: goto label_26fce0;
        case 0x26fd00u: goto label_26fd00;
        default: break;
    }

    ctx->pc = 0x26fc70u;

    // 0x26fc70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26fc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26fc74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26fc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26fc78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x26fc78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26fc7c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x26fc7cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x26fc80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fc84: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x26FC84u;
    {
        const bool branch_taken_0x26fc84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fc84) {
            ctx->pc = 0x26FD00u;
            goto label_26fd00;
        }
    }
    ctx->pc = 0x26FC8Cu;
    // 0x26fc8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fc90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26fc94: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26FC94u;
    {
        const bool branch_taken_0x26fc94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fc94) {
            ctx->pc = 0x26FCE0u;
            goto label_26fce0;
        }
    }
    ctx->pc = 0x26FC9Cu;
    // 0x26fc9c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26fc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fca0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x26fca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fca4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26fca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fca8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x26fca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26fcac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26fcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fcb0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26fcb4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x26fcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26fcb8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26fcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26fcbc: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x26fcbcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x26fcc0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FCC0u;
    {
        const bool branch_taken_0x26fcc0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x26fcc0) {
            ctx->pc = 0x26FCD0u;
            goto label_26fcd0;
        }
    }
    ctx->pc = 0x26FCC8u;
    // 0x26fcc8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x26fcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x26fccc: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x26fcccu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_26fcd0:
    // 0x26fcd0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x26fcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26fcd4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x26fcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26fcd8: 0xc09c6b8  jal         func_271AE0
    ctx->pc = 0x26FCD8u;
    SET_GPR_U32(ctx, 31, 0x26FCE0u);
    ctx->pc = 0x271AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271AE0u, 0x26FCD8u, 0x26FCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FCE0u;
label_26fce0:
    // 0x26fce0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x26fce0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26fce4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26fce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26fce8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26fce8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26fcec: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26FCECu;
    {
        const bool branch_taken_0x26fcec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x26fcec) {
            ctx->pc = 0x26FD00u;
            goto label_26fd00;
        }
    }
    ctx->pc = 0x26FCF4u;
    // 0x26fcf4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26fcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fcf8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x26FCF8u;
    SET_GPR_U32(ctx, 31, 0x26FD00u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x26FCF8u, 0x26FD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FD00u;
label_26fd00:
    // 0x26fd00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26fd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fd04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26fd04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26fd08: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x26fd08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26fd0c: 0x3e00008  jr          $ra
    ctx->pc = 0x26FD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FD0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26FD14u;
    // 0x26fd14: 0x0  nop
    ctx->pc = 0x26fd14u;
    // NOP
    // 0x26fd18: 0x0  nop
    ctx->pc = 0x26fd18u;
    // NOP
    // 0x26fd1c: 0x0  nop
    ctx->pc = 0x26fd1cu;
    // NOP
    ctx->pc = 0x26fd20u;
}
