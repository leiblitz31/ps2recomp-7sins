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

// Function: sub_00440DF8
// Address: 0x440df8 - 0x440e48
void sub_00440DF8_0x440df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00440DF8_0x440df8");
#endif

    switch (ctx->pc) {
        case 0x440e3cu: goto label_440e3c;
        default: break;
    }

    ctx->pc = 0x440df8u;

    // 0x440df8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x440df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x440dfc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x440dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x440e00: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x440e00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x440e04: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x440e04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x440e08: 0x3c060044  lui         $a2, 0x44
    ctx->pc = 0x440e08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)68 << 16));
    // 0x440e0c: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x440e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x440e10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x440e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x440e14: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x440e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x440e18: 0x24840e50  addiu       $a0, $a0, 0xE50
    ctx->pc = 0x440e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3664));
    // 0x440e1c: 0x24a50ea8  addiu       $a1, $a1, 0xEA8
    ctx->pc = 0x440e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3752));
    // 0x440e20: 0x24c60f08  addiu       $a2, $a2, 0xF08
    ctx->pc = 0x440e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3848));
    // 0x440e24: 0x24420f78  addiu       $v0, $v0, 0xF78
    ctx->pc = 0x440e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3960));
    // 0x440e28: 0xac620034  sw          $v0, 0x34($v1)
    ctx->pc = 0x440e28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61E8B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E8B4u, _value); } while (0);
    // 0x440e2c: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x440e2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x61E8A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E8A8u, _value); } while (0);
    // 0x440e30: 0xac65002c  sw          $a1, 0x2C($v1)
    ctx->pc = 0x440e30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x61E8ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E8ACu, _value); } while (0);
    // 0x440e34: 0xc10f96e  jal         func_43E5B8
    ctx->pc = 0x440E34u;
    SET_GPR_U32(ctx, 31, 0x440E3Cu);
    ctx->pc = 0x440E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x440E34u;
    // 0x440e38: 0xac660030  sw          $a2, 0x30($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43E5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43E5B8u, 0x440E34u, 0x440E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x440E3Cu;
label_440e3c:
    // 0x440e3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x440e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x440e40: 0x3e00008  jr          $ra
    ctx->pc = 0x440E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x440E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440E40u;
        // 0x440e44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x440E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x440E48u;
}
