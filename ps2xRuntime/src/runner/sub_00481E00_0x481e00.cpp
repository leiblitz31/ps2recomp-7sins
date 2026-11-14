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

// Function: sub_00481E00
// Address: 0x481e00 - 0x481e70
void sub_00481E00_0x481e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481E00_0x481e00");
#endif

    switch (ctx->pc) {
        case 0x481e28u: goto label_481e28;
        case 0x481e3cu: goto label_481e3c;
        case 0x481e5cu: goto label_481e5c;
        default: break;
    }

    ctx->pc = 0x481e00u;

    // 0x481e00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x481e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x481e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x481e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x481e08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x481e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x481e0c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x481e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x481e10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x481e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481e14: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x481E14u;
    {
        const bool branch_taken_0x481e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x481e14) {
            ctx->pc = 0x481E5Cu;
            goto label_481e5c;
        }
    }
    ctx->pc = 0x481E1Cu;
    // 0x481e1c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x481e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481e20: 0xc120924  jal         func_482490
    ctx->pc = 0x481E20u;
    SET_GPR_U32(ctx, 31, 0x481E28u);
    ctx->pc = 0x482490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482490u, 0x481E20u, 0x481E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481E28u;
label_481e28:
    // 0x481e28: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x481e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481e2c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x481e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x481e30: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x481e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x481e34: 0xc04dfd4  jal         func_137F50
    ctx->pc = 0x481E34u;
    SET_GPR_U32(ctx, 31, 0x481E3Cu);
    ctx->pc = 0x137F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137F50u, 0x481E34u, 0x481E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481E3Cu;
label_481e3c:
    // 0x481e3c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x481e3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x481e40: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x481e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x481e44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x481e44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x481e48: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x481E48u;
    {
        const bool branch_taken_0x481e48 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x481e48) {
            ctx->pc = 0x481E5Cu;
            goto label_481e5c;
        }
    }
    ctx->pc = 0x481E50u;
    // 0x481e50: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x481e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481e54: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x481E54u;
    SET_GPR_U32(ctx, 31, 0x481E5Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x481E54u, 0x481E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481E5Cu;
label_481e5c:
    // 0x481e5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x481e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481e60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x481e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x481e64: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x481e64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x481e68: 0x3e00008  jr          $ra
    ctx->pc = 0x481E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x481E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x481E70u;
}
