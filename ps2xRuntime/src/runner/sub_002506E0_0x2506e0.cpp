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

// Function: sub_002506E0
// Address: 0x2506e0 - 0x250760
void sub_002506E0_0x2506e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002506E0_0x2506e0");
#endif

    switch (ctx->pc) {
        case 0x250724u: goto label_250724;
        case 0x250744u: goto label_250744;
        default: break;
    }

    ctx->pc = 0x2506e0u;

    // 0x2506e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2506e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2506e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2506e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2506e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2506e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2506ec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2506ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2506f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2506f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2506f4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2506F4u;
    {
        const bool branch_taken_0x2506f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2506f4) {
            ctx->pc = 0x250744u;
            goto label_250744;
        }
    }
    ctx->pc = 0x2506FCu;
    // 0x2506fc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2506fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x250700: 0x24635880  addiu       $v1, $v1, 0x5880
    ctx->pc = 0x250700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22656));
    // 0x250704: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x250704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250708: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x250708u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25070c: 0xaf80bbf8  sw          $zero, -0x4408($gp)
    ctx->pc = 0x25070cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949880), GPR_U32(ctx, 0));
    // 0x250710: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x250710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250714: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x250714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x250718: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x250718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25071c: 0xc0420a0  jal         func_108280
    ctx->pc = 0x25071Cu;
    SET_GPR_U32(ctx, 31, 0x250724u);
    ctx->pc = 0x108280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108280u, 0x25071Cu, 0x250724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250724u;
label_250724:
    // 0x250724: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x250724u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x250728: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x250728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x25072c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x25072cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x250730: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x250730u;
    {
        const bool branch_taken_0x250730 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x250730) {
            ctx->pc = 0x250744u;
            goto label_250744;
        }
    }
    ctx->pc = 0x250738u;
    // 0x250738: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x250738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25073c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x25073Cu;
    SET_GPR_U32(ctx, 31, 0x250744u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x25073Cu, 0x250744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250744u;
label_250744:
    // 0x250744: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x250744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250748: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25074c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25074cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x250750: 0x3e00008  jr          $ra
    ctx->pc = 0x250750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250758u;
    // 0x250758: 0x0  nop
    ctx->pc = 0x250758u;
    // NOP
    // 0x25075c: 0x0  nop
    ctx->pc = 0x25075cu;
    // NOP
    ctx->pc = 0x250760u;
}
