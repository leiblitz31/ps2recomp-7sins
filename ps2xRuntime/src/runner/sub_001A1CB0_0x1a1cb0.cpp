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

// Function: sub_001A1CB0
// Address: 0x1a1cb0 - 0x1a1d60
void sub_001A1CB0_0x1a1cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1CB0_0x1a1cb0");
#endif

    switch (ctx->pc) {
        case 0x1a1d20u: goto label_1a1d20;
        case 0x1a1d40u: goto label_1a1d40;
        default: break;
    }

    ctx->pc = 0x1a1cb0u;

    // 0x1a1cb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a1cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a1cb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1cb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a1cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a1cbc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1a1cbcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1a1cc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a1cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1cc4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1A1CC4u;
    {
        const bool branch_taken_0x1a1cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1cc4) {
            ctx->pc = 0x1A1D40u;
            goto label_1a1d40;
        }
    }
    ctx->pc = 0x1A1CCCu;
    // 0x1a1ccc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a1cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1cd0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a1cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a1cd4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A1CD4u;
    {
        const bool branch_taken_0x1a1cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1cd4) {
            ctx->pc = 0x1A1D20u;
            goto label_1a1d20;
        }
    }
    ctx->pc = 0x1A1CDCu;
    // 0x1a1cdc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a1cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1ce0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1a1ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1ce4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a1ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1ce8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1a1ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a1cec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a1cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1cf0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a1cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a1cf4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1a1cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a1cf8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a1cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a1cfc: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x1a1cfcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1a1d00: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1D00u;
    {
        const bool branch_taken_0x1a1d00 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a1d00) {
            ctx->pc = 0x1A1D10u;
            goto label_1a1d10;
        }
    }
    ctx->pc = 0x1A1D08u;
    // 0x1a1d08: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1a1d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1a1d0c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x1a1d0cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_1a1d10:
    // 0x1a1d10: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1a1d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1a1d14: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1a1d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a1d18: 0xc069fd8  jal         func_1A7F60
    ctx->pc = 0x1A1D18u;
    SET_GPR_U32(ctx, 31, 0x1A1D20u);
    ctx->pc = 0x1A7F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7F60u, 0x1A1D18u, 0x1A1D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D20u;
label_1a1d20:
    // 0x1a1d20: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1a1d20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1d24: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1a1d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a1d28: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a1d28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a1d2c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1D2Cu;
    {
        const bool branch_taken_0x1a1d2c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a1d2c) {
            ctx->pc = 0x1A1D40u;
            goto label_1a1d40;
        }
    }
    ctx->pc = 0x1A1D34u;
    // 0x1a1d34: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a1d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1d38: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1A1D38u;
    SET_GPR_U32(ctx, 31, 0x1A1D40u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1A1D38u, 0x1A1D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D40u;
label_1a1d40:
    // 0x1a1d40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a1d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1d44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1d48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a1d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a1d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1D54u;
    // 0x1a1d54: 0x0  nop
    ctx->pc = 0x1a1d54u;
    // NOP
    // 0x1a1d58: 0x0  nop
    ctx->pc = 0x1a1d58u;
    // NOP
    // 0x1a1d5c: 0x0  nop
    ctx->pc = 0x1a1d5cu;
    // NOP
    ctx->pc = 0x1a1d60u;
}
