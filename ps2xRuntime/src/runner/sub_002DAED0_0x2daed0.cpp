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

// Function: sub_002DAED0
// Address: 0x2daed0 - 0x2dafa0
void sub_002DAED0_0x2daed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAED0_0x2daed0");
#endif

    switch (ctx->pc) {
        case 0x2daee8u: goto label_2daee8;
        case 0x2daf6cu: goto label_2daf6c;
        case 0x2daf8cu: goto label_2daf8c;
        default: break;
    }

    ctx->pc = 0x2daed0u;

    // 0x2daed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2daed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2daed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2daed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2daed8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2daed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2daedc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2daedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2daee0: 0xc09d130  jal         func_2744C0
    ctx->pc = 0x2DAEE0u;
    SET_GPR_U32(ctx, 31, 0x2DAEE8u);
    ctx->pc = 0x2744C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744C0u, 0x2DAEE0u, 0x2DAEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAEE8u;
label_2daee8:
    // 0x2daee8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2daee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2daeec: 0x24636910  addiu       $v1, $v1, 0x6910
    ctx->pc = 0x2daeecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26896));
    // 0x2daef0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2daef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2daef4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2daef4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2daef8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2daef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2daefc: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x2daefcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
    // 0x2daf00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2daf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2daf04: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x2daf04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
    // 0x2daf08: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2daf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2daf0c: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x2daf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
    // 0x2daf10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2daf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2daf14: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x2daf14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x2daf18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2daf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2daf1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2daf1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2daf20: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2daf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2daf24: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAF24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAF2Cu;
    // 0x2daf2c: 0x0  nop
    ctx->pc = 0x2daf2cu;
    // NOP
    // 0x2daf30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2daf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2daf34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2daf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2daf38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2daf38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2daf3c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2daf3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2daf40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2daf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2daf44: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DAF44u;
    {
        const bool branch_taken_0x2daf44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2daf44) {
            ctx->pc = 0x2DAF8Cu;
            goto label_2daf8c;
        }
    }
    ctx->pc = 0x2DAF4Cu;
    // 0x2daf4c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2daf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2daf50: 0x24636910  addiu       $v1, $v1, 0x6910
    ctx->pc = 0x2daf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26896));
    // 0x2daf54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2daf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2daf58: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2daf58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2daf5c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2daf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2daf60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2daf60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daf64: 0xc09d150  jal         func_274540
    ctx->pc = 0x2DAF64u;
    SET_GPR_U32(ctx, 31, 0x2DAF6Cu);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x2DAF64u, 0x2DAF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAF6Cu;
label_2daf6c:
    // 0x2daf6c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2daf6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2daf70: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2daf70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2daf74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2daf74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2daf78: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DAF78u;
    {
        const bool branch_taken_0x2daf78 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2daf78) {
            ctx->pc = 0x2DAF8Cu;
            goto label_2daf8c;
        }
    }
    ctx->pc = 0x2DAF80u;
    // 0x2daf80: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2daf80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2daf84: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2DAF84u;
    SET_GPR_U32(ctx, 31, 0x2DAF8Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2DAF84u, 0x2DAF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAF8Cu;
label_2daf8c:
    // 0x2daf8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2daf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2daf90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2daf90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2daf94: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2daf94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2daf98: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAFA0u;
}
