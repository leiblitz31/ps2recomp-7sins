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

// Function: sub_0022BD40
// Address: 0x22bd40 - 0x22bdf0
void sub_0022BD40_0x22bd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BD40_0x22bd40");
#endif

    switch (ctx->pc) {
        case 0x22bdb0u: goto label_22bdb0;
        case 0x22bdd0u: goto label_22bdd0;
        default: break;
    }

    ctx->pc = 0x22bd40u;

    // 0x22bd40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22bd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22bd44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22bd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22bd48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22bd48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22bd4c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x22bd4cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x22bd50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22bd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bd54: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x22BD54u;
    {
        const bool branch_taken_0x22bd54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bd54) {
            ctx->pc = 0x22BDD0u;
            goto label_22bdd0;
        }
    }
    ctx->pc = 0x22BD5Cu;
    // 0x22bd5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22bd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bd60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22bd64: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x22BD64u;
    {
        const bool branch_taken_0x22bd64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bd64) {
            ctx->pc = 0x22BDB0u;
            goto label_22bdb0;
        }
    }
    ctx->pc = 0x22BD6Cu;
    // 0x22bd6c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22bd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bd70: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x22bd70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bd74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bd78: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x22bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22bd7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bd80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22bd84: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x22bd84u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22bd88: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22bd8c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x22bd8cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x22bd90: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22BD90u;
    {
        const bool branch_taken_0x22bd90 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x22bd90) {
            ctx->pc = 0x22BDA0u;
            goto label_22bda0;
        }
    }
    ctx->pc = 0x22BD98u;
    // 0x22bd98: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x22bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x22bd9c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x22bd9cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_22bda0:
    // 0x22bda0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x22bda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x22bda4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x22bda4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22bda8: 0xc08c9f8  jal         func_2327E0
    ctx->pc = 0x22BDA8u;
    SET_GPR_U32(ctx, 31, 0x22BDB0u);
    ctx->pc = 0x2327E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2327E0u, 0x22BDA8u, 0x22BDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BDB0u;
label_22bdb0:
    // 0x22bdb0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x22bdb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22bdb4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x22bdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22bdb8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22bdb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x22bdbc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22BDBCu;
    {
        const bool branch_taken_0x22bdbc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22bdbc) {
            ctx->pc = 0x22BDD0u;
            goto label_22bdd0;
        }
    }
    ctx->pc = 0x22BDC4u;
    // 0x22bdc4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22bdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bdc8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x22BDC8u;
    SET_GPR_U32(ctx, 31, 0x22BDD0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x22BDC8u, 0x22BDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BDD0u;
label_22bdd0:
    // 0x22bdd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bdd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22bdd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22bdd8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22bdd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22bddc: 0x3e00008  jr          $ra
    ctx->pc = 0x22BDDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BDDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BDE4u;
    // 0x22bde4: 0x0  nop
    ctx->pc = 0x22bde4u;
    // NOP
    // 0x22bde8: 0x0  nop
    ctx->pc = 0x22bde8u;
    // NOP
    // 0x22bdec: 0x0  nop
    ctx->pc = 0x22bdecu;
    // NOP
    ctx->pc = 0x22bdf0u;
}
