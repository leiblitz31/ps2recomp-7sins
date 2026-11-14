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

// Function: sub_002B6610
// Address: 0x2b6610 - 0x2b66a0
void sub_002B6610_0x2b6610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6610_0x2b6610");
#endif

    switch (ctx->pc) {
        case 0x2b662cu: goto label_2b662c;
        case 0x2b664cu: goto label_2b664c;
        case 0x2b6680u: goto label_2b6680;
        default: break;
    }

    ctx->pc = 0x2b6610u;

    // 0x2b6610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b6610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b6614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b6614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b6618: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b6618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b661c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b661cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6620: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2b6620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2b6624: 0xc091174  jal         func_2445D0
    ctx->pc = 0x2B6624u;
    SET_GPR_U32(ctx, 31, 0x2B662Cu);
    ctx->pc = 0x2445D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2445D0u, 0x2B6624u, 0x2B662Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B662Cu;
label_2b662c:
    // 0x2b662c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2b662cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2b6630: 0x24636740  addiu       $v1, $v1, 0x6740
    ctx->pc = 0x2b6630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26432));
    // 0x2b6634: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b6634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6638: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b6638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b663c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b663cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6640: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x2b6640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x2b6644: 0xc0adb10  jal         func_2B6C40
    ctx->pc = 0x2B6644u;
    SET_GPR_U32(ctx, 31, 0x2B664Cu);
    ctx->pc = 0x2B6C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6C40u, 0x2B6644u, 0x2B664Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B664Cu;
label_2b664c:
    // 0x2b664c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b664cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6650: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x2b6650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x2b6654: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b6654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6658: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b6658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b665c: 0xa0430048  sb          $v1, 0x48($v0)
    ctx->pc = 0x2b665cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 72), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b6660: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b6660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6664: 0xa0400049  sb          $zero, 0x49($v0)
    ctx->pc = 0x2b6664u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 73), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6668: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b6668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b666c: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x2b666cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x2b6670: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b6670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6674: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2b6674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2b6678: 0xc0adab8  jal         func_2B6AE0
    ctx->pc = 0x2B6678u;
    SET_GPR_U32(ctx, 31, 0x2B6680u);
    ctx->pc = 0x2B6AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6AE0u, 0x2B6678u, 0x2B6680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6680u;
label_2b6680:
    // 0x2b6680: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b6680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6684: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x2b6684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
    // 0x2b6688: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b6688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b668c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b668cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6690: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b6690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b6694: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B669Cu;
    // 0x2b669c: 0x0  nop
    ctx->pc = 0x2b669cu;
    // NOP
    ctx->pc = 0x2b66a0u;
}
