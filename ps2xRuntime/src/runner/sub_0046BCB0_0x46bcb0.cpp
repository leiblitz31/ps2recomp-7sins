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

// Function: sub_0046BCB0
// Address: 0x46bcb0 - 0x46bd20
void sub_0046BCB0_0x46bcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046BCB0_0x46bcb0");
#endif

    switch (ctx->pc) {
        case 0x46bcecu: goto label_46bcec;
        case 0x46bd0cu: goto label_46bd0c;
        default: break;
    }

    ctx->pc = 0x46bcb0u;

    // 0x46bcb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46bcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46bcb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46bcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46bcb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46bcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46bcbc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x46bcbcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x46bcc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bcc4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x46BCC4u;
    {
        const bool branch_taken_0x46bcc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46bcc4) {
            ctx->pc = 0x46BD0Cu;
            goto label_46bd0c;
        }
    }
    ctx->pc = 0x46BCCCu;
    // 0x46bccc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x46bcccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x46bcd0: 0x24636cf8  addiu       $v1, $v1, 0x6CF8
    ctx->pc = 0x46bcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27896));
    // 0x46bcd4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46bcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bcd8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x46bcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x46bcdc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46bcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bce0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46bce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46bce4: 0xc11af48  jal         func_46BD20
    ctx->pc = 0x46BCE4u;
    SET_GPR_U32(ctx, 31, 0x46BCECu);
    ctx->pc = 0x46BD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BD20u, 0x46BCE4u, 0x46BCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BCECu;
label_46bcec:
    // 0x46bcec: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x46bcecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46bcf0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x46bcf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x46bcf4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x46bcf4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x46bcf8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x46BCF8u;
    {
        const bool branch_taken_0x46bcf8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x46bcf8) {
            ctx->pc = 0x46BD0Cu;
            goto label_46bd0c;
        }
    }
    ctx->pc = 0x46BD00u;
    // 0x46bd00: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46bd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bd04: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x46BD04u;
    SET_GPR_U32(ctx, 31, 0x46BD0Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x46BD04u, 0x46BD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BD0Cu;
label_46bd0c:
    // 0x46bd0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46bd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bd10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46bd10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46bd14: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46bd14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46bd18: 0x3e00008  jr          $ra
    ctx->pc = 0x46BD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46BD18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46BD20u;
}
