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

// Function: sub_00274260
// Address: 0x274260 - 0x2742e0
void sub_00274260_0x274260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274260_0x274260");
#endif

    switch (ctx->pc) {
        case 0x2742a8u: goto label_2742a8;
        case 0x2742c8u: goto label_2742c8;
        default: break;
    }

    ctx->pc = 0x274260u;

    // 0x274260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x274260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x274264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x274264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x274268: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x274268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27426c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x27426cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x274270: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x274270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274274: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x274274u;
    {
        const bool branch_taken_0x274274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274274) {
            ctx->pc = 0x2742C8u;
            goto label_2742c8;
        }
    }
    ctx->pc = 0x27427Cu;
    // 0x27427c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x27427cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x274280: 0x24635ac0  addiu       $v1, $v1, 0x5AC0
    ctx->pc = 0x274280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23232));
    // 0x274284: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x274284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274288: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x274288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x27428c: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x27428cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x274290: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x274290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274294: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x274294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x274298: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x274298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27429c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27429cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2742a0: 0xc0887b4  jal         func_221ED0
    ctx->pc = 0x2742A0u;
    SET_GPR_U32(ctx, 31, 0x2742A8u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x2742A0u, 0x2742A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2742A8u;
label_2742a8:
    // 0x2742a8: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2742a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2742ac: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2742acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2742b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2742b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2742b4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2742B4u;
    {
        const bool branch_taken_0x2742b4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2742b4) {
            ctx->pc = 0x2742C8u;
            goto label_2742c8;
        }
    }
    ctx->pc = 0x2742BCu;
    // 0x2742bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2742bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2742c0: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2742C0u;
    SET_GPR_U32(ctx, 31, 0x2742C8u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2742C0u, 0x2742C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2742C8u;
label_2742c8:
    // 0x2742c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2742c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2742cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2742ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2742d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2742d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2742d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2742D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2742D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2742DCu;
    // 0x2742dc: 0x0  nop
    ctx->pc = 0x2742dcu;
    // NOP
    ctx->pc = 0x2742e0u;
}
