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

// Function: sub_002759C0
// Address: 0x2759c0 - 0x275a50
void sub_002759C0_0x2759c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002759C0_0x2759c0");
#endif

    switch (ctx->pc) {
        case 0x275a1cu: goto label_275a1c;
        case 0x275a3cu: goto label_275a3c;
        default: break;
    }

    ctx->pc = 0x2759c0u;

    // 0x2759c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2759c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2759c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2759c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2759c8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2759c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2759cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2759ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2759d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2759d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2759d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2759D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2759D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2759DCu;
    // 0x2759dc: 0x0  nop
    ctx->pc = 0x2759dcu;
    // NOP
    // 0x2759e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2759e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2759e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2759e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2759e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2759e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2759ec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2759ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2759f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2759f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2759f4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2759F4u;
    {
        const bool branch_taken_0x2759f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2759f4) {
            ctx->pc = 0x275A3Cu;
            goto label_275a3c;
        }
    }
    ctx->pc = 0x2759FCu;
    // 0x2759fc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2759fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x275a00: 0x24635bd0  addiu       $v1, $v1, 0x5BD0
    ctx->pc = 0x275a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23504));
    // 0x275a04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x275a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275a08: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x275a08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x275a0c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x275a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275a10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x275a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275a14: 0xc09d150  jal         func_274540
    ctx->pc = 0x275A14u;
    SET_GPR_U32(ctx, 31, 0x275A1Cu);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x275A14u, 0x275A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275A1Cu;
label_275a1c:
    // 0x275a1c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x275a1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275a20: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x275a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x275a24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x275a24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x275a28: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275A28u;
    {
        const bool branch_taken_0x275a28 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x275a28) {
            ctx->pc = 0x275A3Cu;
            goto label_275a3c;
        }
    }
    ctx->pc = 0x275A30u;
    // 0x275a30: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x275a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275a34: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x275A34u;
    SET_GPR_U32(ctx, 31, 0x275A3Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x275A34u, 0x275A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275A3Cu;
label_275a3c:
    // 0x275a3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x275a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275a40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275a44: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x275a44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x275a48: 0x3e00008  jr          $ra
    ctx->pc = 0x275A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275A50u;
}
