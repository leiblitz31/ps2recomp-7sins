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

// Function: sub_002D01D0
// Address: 0x2d01d0 - 0x2d0280
void sub_002D01D0_0x2d01d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D01D0_0x2d01d0");
#endif

    switch (ctx->pc) {
        case 0x2d0240u: goto label_2d0240;
        case 0x2d0260u: goto label_2d0260;
        default: break;
    }

    ctx->pc = 0x2d01d0u;

    // 0x2d01d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d01d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d01d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d01d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d01d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d01d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d01dc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2d01dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2d01e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d01e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d01e4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D01E4u;
    {
        const bool branch_taken_0x2d01e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d01e4) {
            ctx->pc = 0x2D0260u;
            goto label_2d0260;
        }
    }
    ctx->pc = 0x2D01ECu;
    // 0x2d01ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d01ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d01f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d01f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d01f4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D01F4u;
    {
        const bool branch_taken_0x2d01f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d01f4) {
            ctx->pc = 0x2D0240u;
            goto label_2d0240;
        }
    }
    ctx->pc = 0x2D01FCu;
    // 0x2d01fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d01fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0200: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2d0200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0204: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d0204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0208: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2d0208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d020c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d020cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0210: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d0210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0214: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2d0214u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d0218: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2d0218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d021c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x2d021cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2d0220: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0220u;
    {
        const bool branch_taken_0x2d0220 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2d0220) {
            ctx->pc = 0x2D0230u;
            goto label_2d0230;
        }
    }
    ctx->pc = 0x2D0228u;
    // 0x2d0228: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2d0228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2d022c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2d022cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2d0230:
    // 0x2d0230: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2d0230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2d0234: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2d0234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d0238: 0xc0b6314  jal         func_2D8C50
    ctx->pc = 0x2D0238u;
    SET_GPR_U32(ctx, 31, 0x2D0240u);
    ctx->pc = 0x2D8C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8C50u, 0x2D0238u, 0x2D0240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0240u;
label_2d0240:
    // 0x2d0240: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2d0240u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0244: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d0244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d0248: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d0248u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d024c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D024Cu;
    {
        const bool branch_taken_0x2d024c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d024c) {
            ctx->pc = 0x2D0260u;
            goto label_2d0260;
        }
    }
    ctx->pc = 0x2D0254u;
    // 0x2d0254: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d0254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0258: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2D0258u;
    SET_GPR_U32(ctx, 31, 0x2D0260u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2D0258u, 0x2D0260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0260u;
label_2d0260:
    // 0x2d0260: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d0260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0268: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d0268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d026c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D026Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D026Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0274u;
    // 0x2d0274: 0x0  nop
    ctx->pc = 0x2d0274u;
    // NOP
    // 0x2d0278: 0x0  nop
    ctx->pc = 0x2d0278u;
    // NOP
    // 0x2d027c: 0x0  nop
    ctx->pc = 0x2d027cu;
    // NOP
    ctx->pc = 0x2d0280u;
}
