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

// Function: sub_00221D00
// Address: 0x221d00 - 0x221db0
void sub_00221D00_0x221d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221D00_0x221d00");
#endif

    switch (ctx->pc) {
        case 0x221d70u: goto label_221d70;
        case 0x221d90u: goto label_221d90;
        default: break;
    }

    ctx->pc = 0x221d00u;

    // 0x221d00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x221d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x221d04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x221d08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x221d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x221d0c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x221d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x221d10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x221d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221d14: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x221D14u;
    {
        const bool branch_taken_0x221d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221d14) {
            ctx->pc = 0x221D90u;
            goto label_221d90;
        }
    }
    ctx->pc = 0x221D1Cu;
    // 0x221d1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x221d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221d20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x221d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221d24: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x221D24u;
    {
        const bool branch_taken_0x221d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221d24) {
            ctx->pc = 0x221D70u;
            goto label_221d70;
        }
    }
    ctx->pc = 0x221D2Cu;
    // 0x221d2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x221d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221d30: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x221d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221d34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x221d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221d38: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x221d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x221d3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x221d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221d40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x221d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221d44: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x221d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x221d48: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x221d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x221d4c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x221d4cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x221d50: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x221D50u;
    {
        const bool branch_taken_0x221d50 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x221d50) {
            ctx->pc = 0x221D60u;
            goto label_221d60;
        }
    }
    ctx->pc = 0x221D58u;
    // 0x221d58: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x221d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x221d5c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x221d5cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_221d60:
    // 0x221d60: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x221d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x221d64: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x221d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x221d68: 0xc089574  jal         func_2255D0
    ctx->pc = 0x221D68u;
    SET_GPR_U32(ctx, 31, 0x221D70u);
    ctx->pc = 0x2255D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2255D0u, 0x221D68u, 0x221D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221D70u;
label_221d70:
    // 0x221d70: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x221d70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221d74: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x221d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x221d78: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x221d78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x221d7c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x221D7Cu;
    {
        const bool branch_taken_0x221d7c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x221d7c) {
            ctx->pc = 0x221D90u;
            goto label_221d90;
        }
    }
    ctx->pc = 0x221D84u;
    // 0x221d84: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x221d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221d88: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x221D88u;
    SET_GPR_U32(ctx, 31, 0x221D90u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x221D88u, 0x221D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221D90u;
label_221d90:
    // 0x221d90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x221d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221d94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221d98: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x221d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x221d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x221D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221DA4u;
    // 0x221da4: 0x0  nop
    ctx->pc = 0x221da4u;
    // NOP
    // 0x221da8: 0x0  nop
    ctx->pc = 0x221da8u;
    // NOP
    // 0x221dac: 0x0  nop
    ctx->pc = 0x221dacu;
    // NOP
    ctx->pc = 0x221db0u;
}
