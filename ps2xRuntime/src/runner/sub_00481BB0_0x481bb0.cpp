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

// Function: sub_00481BB0
// Address: 0x481bb0 - 0x481c70
void sub_00481BB0_0x481bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481BB0_0x481bb0");
#endif

    switch (ctx->pc) {
        case 0x481c20u: goto label_481c20;
        case 0x481c34u: goto label_481c34;
        case 0x481c54u: goto label_481c54;
        default: break;
    }

    ctx->pc = 0x481bb0u;

    // 0x481bb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x481bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x481bb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x481bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x481bb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x481bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x481bbc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x481bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x481bc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x481bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481bc4: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x481BC4u;
    {
        const bool branch_taken_0x481bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x481bc4) {
            ctx->pc = 0x481C54u;
            goto label_481c54;
        }
    }
    ctx->pc = 0x481BCCu;
    // 0x481bcc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x481bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481bd0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x481bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x481bd4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x481BD4u;
    {
        const bool branch_taken_0x481bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x481bd4) {
            ctx->pc = 0x481C20u;
            goto label_481c20;
        }
    }
    ctx->pc = 0x481BDCu;
    // 0x481bdc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x481bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481be0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x481be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481be4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x481be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481be8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x481be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x481bec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x481becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481bf0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x481bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x481bf4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x481bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x481bf8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x481bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x481bfc: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x481bfcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x481c00: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x481C00u;
    {
        const bool branch_taken_0x481c00 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x481c00) {
            ctx->pc = 0x481C10u;
            goto label_481c10;
        }
    }
    ctx->pc = 0x481C08u;
    // 0x481c08: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x481c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x481c0c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x481c0cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_481c10:
    // 0x481c10: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x481c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x481c14: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x481c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x481c18: 0xc120734  jal         func_481CD0
    ctx->pc = 0x481C18u;
    SET_GPR_U32(ctx, 31, 0x481C20u);
    ctx->pc = 0x481CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x481CD0u, 0x481C18u, 0x481C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481C20u;
label_481c20:
    // 0x481c20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x481c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481c24: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x481c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x481c28: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x481c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x481c2c: 0xc12071c  jal         func_481C70
    ctx->pc = 0x481C2Cu;
    SET_GPR_U32(ctx, 31, 0x481C34u);
    ctx->pc = 0x481C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x481C70u, 0x481C2Cu, 0x481C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481C34u;
label_481c34:
    // 0x481c34: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x481c34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x481c38: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x481c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x481c3c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x481c3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x481c40: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x481C40u;
    {
        const bool branch_taken_0x481c40 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x481c40) {
            ctx->pc = 0x481C54u;
            goto label_481c54;
        }
    }
    ctx->pc = 0x481C48u;
    // 0x481c48: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x481c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481c4c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x481C4Cu;
    SET_GPR_U32(ctx, 31, 0x481C54u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x481C4Cu, 0x481C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481C54u;
label_481c54:
    // 0x481c54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x481c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481c58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x481c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x481c5c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x481c5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x481c60: 0x3e00008  jr          $ra
    ctx->pc = 0x481C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x481C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x481C68u;
    // 0x481c68: 0x0  nop
    ctx->pc = 0x481c68u;
    // NOP
    // 0x481c6c: 0x0  nop
    ctx->pc = 0x481c6cu;
    // NOP
    ctx->pc = 0x481c70u;
}
