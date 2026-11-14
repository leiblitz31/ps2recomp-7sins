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

// Function: sub_0047ABC0
// Address: 0x47abc0 - 0x47ac70
void sub_0047ABC0_0x47abc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047ABC0_0x47abc0");
#endif

    switch (ctx->pc) {
        case 0x47ac30u: goto label_47ac30;
        case 0x47ac50u: goto label_47ac50;
        default: break;
    }

    ctx->pc = 0x47abc0u;

    // 0x47abc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47abc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x47abc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47abc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47abc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x47abc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x47abcc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x47abccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x47abd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47abd4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x47ABD4u;
    {
        const bool branch_taken_0x47abd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47abd4) {
            ctx->pc = 0x47AC50u;
            goto label_47ac50;
        }
    }
    ctx->pc = 0x47ABDCu;
    // 0x47abdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47abe0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47abe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47abe4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x47ABE4u;
    {
        const bool branch_taken_0x47abe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47abe4) {
            ctx->pc = 0x47AC30u;
            goto label_47ac30;
        }
    }
    ctx->pc = 0x47ABECu;
    // 0x47abec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x47abecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47abf0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x47abf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47abf4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47abf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47abf8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x47abf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x47abfc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47abfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47ac00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47ac04: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x47ac04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x47ac08: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x47ac08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x47ac0c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x47ac0cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x47ac10: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x47AC10u;
    {
        const bool branch_taken_0x47ac10 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x47ac10) {
            ctx->pc = 0x47AC20u;
            goto label_47ac20;
        }
    }
    ctx->pc = 0x47AC18u;
    // 0x47ac18: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x47ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x47ac1c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x47ac1cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_47ac20:
    // 0x47ac20: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x47ac20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x47ac24: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x47ac24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x47ac28: 0xc11f148  jal         func_47C520
    ctx->pc = 0x47AC28u;
    SET_GPR_U32(ctx, 31, 0x47AC30u);
    ctx->pc = 0x47C520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C520u, 0x47AC28u, 0x47AC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47AC30u;
label_47ac30:
    // 0x47ac30: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x47ac30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47ac34: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x47ac34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x47ac38: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x47ac38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x47ac3c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x47AC3Cu;
    {
        const bool branch_taken_0x47ac3c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x47ac3c) {
            ctx->pc = 0x47AC50u;
            goto label_47ac50;
        }
    }
    ctx->pc = 0x47AC44u;
    // 0x47ac44: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x47ac44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47ac48: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x47AC48u;
    SET_GPR_U32(ctx, 31, 0x47AC50u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x47AC48u, 0x47AC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47AC50u;
label_47ac50:
    // 0x47ac50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47ac54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47ac54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47ac58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x47ac58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x47ac5c: 0x3e00008  jr          $ra
    ctx->pc = 0x47AC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47AC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47AC64u;
    // 0x47ac64: 0x0  nop
    ctx->pc = 0x47ac64u;
    // NOP
    // 0x47ac68: 0x0  nop
    ctx->pc = 0x47ac68u;
    // NOP
    // 0x47ac6c: 0x0  nop
    ctx->pc = 0x47ac6cu;
    // NOP
    ctx->pc = 0x47ac70u;
}
