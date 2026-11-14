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

// Function: sub_004647B0
// Address: 0x4647b0 - 0x464810
void sub_004647B0_0x4647b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004647B0_0x4647b0");
#endif

    ctx->pc = 0x4647b0u;

    // 0x4647b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4647b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4647b4: 0xa7a40000  sh          $a0, 0x0($sp)
    ctx->pc = 0x4647b4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4647b8: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x4647b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4647bc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4647bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4647c0: 0x28420041  slti        $v0, $v0, 0x41
    ctx->pc = 0x4647c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x4647c4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4647C4u;
    {
        const bool branch_taken_0x4647c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4647c4) {
            ctx->pc = 0x4647F4u;
            goto label_4647f4;
        }
    }
    ctx->pc = 0x4647CCu;
    // 0x4647cc: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x4647ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4647d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4647d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4647d4: 0x2841005b  slti        $at, $v0, 0x5B
    ctx->pc = 0x4647d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)91) ? 1 : 0);
    // 0x4647d8: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x4647D8u;
    {
        const bool branch_taken_0x4647d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4647d8) {
            ctx->pc = 0x4647F4u;
            goto label_4647f4;
        }
    }
    ctx->pc = 0x4647E0u;
    // 0x4647e0: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x4647e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4647e4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4647e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4647e8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x4647e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x4647ec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4647ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4647f0: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x4647f0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
label_4647f4:
    // 0x4647f4: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x4647f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4647f8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4647f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4647fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4647FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4647FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x464804u;
    // 0x464804: 0x0  nop
    ctx->pc = 0x464804u;
    // NOP
    // 0x464808: 0x0  nop
    ctx->pc = 0x464808u;
    // NOP
    // 0x46480c: 0x0  nop
    ctx->pc = 0x46480cu;
    // NOP
    ctx->pc = 0x464810u;
}
