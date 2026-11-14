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

// Function: sub_002BEBA0
// Address: 0x2beba0 - 0x2bec50
void sub_002BEBA0_0x2beba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BEBA0_0x2beba0");
#endif

    switch (ctx->pc) {
        case 0x2bec10u: goto label_2bec10;
        case 0x2bec30u: goto label_2bec30;
        default: break;
    }

    ctx->pc = 0x2beba0u;

    // 0x2beba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2beba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2beba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2beba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2beba8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2beba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2bebac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2bebacu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2bebb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bebb4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2BEBB4u;
    {
        const bool branch_taken_0x2bebb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bebb4) {
            ctx->pc = 0x2BEC30u;
            goto label_2bec30;
        }
    }
    ctx->pc = 0x2BEBBCu;
    // 0x2bebbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bebbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bebc0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bebc4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BEBC4u;
    {
        const bool branch_taken_0x2bebc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bebc4) {
            ctx->pc = 0x2BEC10u;
            goto label_2bec10;
        }
    }
    ctx->pc = 0x2BEBCCu;
    // 0x2bebcc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bebccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bebd0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2bebd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bebd4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bebd8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2bebd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2bebdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bebe0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bebe4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2bebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bebe8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2bebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2bebec: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x2bebecu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2bebf0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BEBF0u;
    {
        const bool branch_taken_0x2bebf0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2bebf0) {
            ctx->pc = 0x2BEC00u;
            goto label_2bec00;
        }
    }
    ctx->pc = 0x2BEBF8u;
    // 0x2bebf8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2bebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2bebfc: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2bebfcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2bec00:
    // 0x2bec00: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2bec00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2bec04: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2bec04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bec08: 0xc0b2a28  jal         func_2CA8A0
    ctx->pc = 0x2BEC08u;
    SET_GPR_U32(ctx, 31, 0x2BEC10u);
    ctx->pc = 0x2CA8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA8A0u, 0x2BEC08u, 0x2BEC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEC10u;
label_2bec10:
    // 0x2bec10: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2bec10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bec14: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2bec14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2bec18: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bec18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2bec1c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BEC1Cu;
    {
        const bool branch_taken_0x2bec1c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bec1c) {
            ctx->pc = 0x2BEC30u;
            goto label_2bec30;
        }
    }
    ctx->pc = 0x2BEC24u;
    // 0x2bec24: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bec24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bec28: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2BEC28u;
    SET_GPR_U32(ctx, 31, 0x2BEC30u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2BEC28u, 0x2BEC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEC30u;
label_2bec30:
    // 0x2bec30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bec30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bec34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bec34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bec38: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2bec38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bec3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEC44u;
    // 0x2bec44: 0x0  nop
    ctx->pc = 0x2bec44u;
    // NOP
    // 0x2bec48: 0x0  nop
    ctx->pc = 0x2bec48u;
    // NOP
    // 0x2bec4c: 0x0  nop
    ctx->pc = 0x2bec4cu;
    // NOP
    ctx->pc = 0x2bec50u;
}
