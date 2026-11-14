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

// Function: sub_00278BD0
// Address: 0x278bd0 - 0x278c80
void sub_00278BD0_0x278bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278BD0_0x278bd0");
#endif

    switch (ctx->pc) {
        case 0x278c40u: goto label_278c40;
        case 0x278c60u: goto label_278c60;
        default: break;
    }

    ctx->pc = 0x278bd0u;

    // 0x278bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x278bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x278bd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x278bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x278bd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x278bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x278bdc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x278bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x278be0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278be4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x278BE4u;
    {
        const bool branch_taken_0x278be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x278be4) {
            ctx->pc = 0x278C60u;
            goto label_278c60;
        }
    }
    ctx->pc = 0x278BECu;
    // 0x278bec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278bf0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x278bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278bf4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x278BF4u;
    {
        const bool branch_taken_0x278bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x278bf4) {
            ctx->pc = 0x278C40u;
            goto label_278c40;
        }
    }
    ctx->pc = 0x278BFCu;
    // 0x278bfc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x278bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278c00: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x278c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278c04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278c08: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x278c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x278c0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278c10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x278c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278c14: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x278c14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x278c18: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x278c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x278c1c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x278c1cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x278c20: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x278C20u;
    {
        const bool branch_taken_0x278c20 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x278c20) {
            ctx->pc = 0x278C30u;
            goto label_278c30;
        }
    }
    ctx->pc = 0x278C28u;
    // 0x278c28: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x278c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x278c2c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x278c2cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_278c30:
    // 0x278c30: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x278c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x278c34: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x278c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x278c38: 0xc0a0888  jal         func_282220
    ctx->pc = 0x278C38u;
    SET_GPR_U32(ctx, 31, 0x278C40u);
    ctx->pc = 0x282220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282220u, 0x278C38u, 0x278C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278C40u;
label_278c40:
    // 0x278c40: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x278c40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278c44: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x278c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x278c48: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x278c48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x278c4c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x278C4Cu;
    {
        const bool branch_taken_0x278c4c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x278c4c) {
            ctx->pc = 0x278C60u;
            goto label_278c60;
        }
    }
    ctx->pc = 0x278C54u;
    // 0x278c54: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x278c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278c58: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x278C58u;
    SET_GPR_U32(ctx, 31, 0x278C60u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x278C58u, 0x278C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278C60u;
label_278c60:
    // 0x278c60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278c64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x278c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278c68: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x278c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x278c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x278C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278C74u;
    // 0x278c74: 0x0  nop
    ctx->pc = 0x278c74u;
    // NOP
    // 0x278c78: 0x0  nop
    ctx->pc = 0x278c78u;
    // NOP
    // 0x278c7c: 0x0  nop
    ctx->pc = 0x278c7cu;
    // NOP
    ctx->pc = 0x278c80u;
}
