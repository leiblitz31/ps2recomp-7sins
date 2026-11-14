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

// Function: sub_00240170
// Address: 0x240170 - 0x2401b0
void sub_00240170_0x240170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240170_0x240170");
#endif

    switch (ctx->pc) {
        case 0x240184u: goto label_240184;
        case 0x24019cu: goto label_24019c;
        default: break;
    }

    ctx->pc = 0x240170u;

    // 0x240170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x240174: 0x18800005  blez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x240174u;
    {
        const bool branch_taken_0x240174 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x240178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240174u;
        // 0x240178: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240174) {
            ctx->pc = 0x24018Cu;
            goto label_24018c;
        }
    }
    ctx->pc = 0x24017Cu;
    // 0x24017c: 0xc0beb04  jal         func_2FAC10
    ctx->pc = 0x24017Cu;
    SET_GPR_U32(ctx, 31, 0x240184u);
    ctx->pc = 0x2FAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAC10u, 0x24017Cu, 0x240184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240184u;
label_240184:
    // 0x240184: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x240184u;
    {
        const bool branch_taken_0x240184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240184u;
        // 0x240188: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240184) {
            ctx->pc = 0x2401A4u;
            goto label_2401a4;
        }
    }
    ctx->pc = 0x24018Cu;
label_24018c:
    // 0x24018c: 0x4187a  dsrl        $v1, $a0, 1
    ctx->pc = 0x24018cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) >> 1);
    // 0x240190: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x240190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x240194: 0xc0beb04  jal         func_2FAC10
    ctx->pc = 0x240194u;
    SET_GPR_U32(ctx, 31, 0x24019Cu);
    ctx->pc = 0x240198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240194u;
    // 0x240198: 0x622025  or          $a0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAC10u, 0x240194u, 0x24019Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24019Cu;
label_24019c:
    // 0x24019c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x24019cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2401a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2401a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2401a4:
    // 0x2401a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2401A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2401A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2401A4u;
        // 0x2401a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2401A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2401ACu;
    // 0x2401ac: 0x0  nop
    ctx->pc = 0x2401acu;
    // NOP
    ctx->pc = 0x2401b0u;
}
