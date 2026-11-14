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

// Function: sub_004E45D8
// Address: 0x4e45d8 - 0x4e4620
void sub_004E45D8_0x4e45d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E45D8_0x4e45d8");
#endif

    switch (ctx->pc) {
        case 0x4e4610u: goto label_4e4610;
        default: break;
    }

    ctx->pc = 0x4e45d8u;

    // 0x4e45d8: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E45D8u;
    {
        const bool branch_taken_0x4e45d8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e45d8) {
            ctx->pc = 0x4E45DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E45D8u;
            // 0x4e45dc: 0x73657270  .word       0x73657270                   # INVALID     $k1, $a1, 0x7270 # 00000000 <InstrIdType: R5900_MMI_PMFHL> (Delay Slot)
            throw std::runtime_error("Unhandled PMFHL instruction: function 0x9 at 0x4E45DC raw=0x73657270");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5027ACu;
            return;
        }
    }
    ctx->pc = 0x4E45E0u;
    // 0x4e45e0: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x4e45e0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e45e4: 0x0  nop
    ctx->pc = 0x4e45e4u;
    // NOP
    // 0x4e45e8: 0x0  nop
    ctx->pc = 0x4e45e8u;
    // NOP
    // 0x4e45ec: 0x0  nop
    ctx->pc = 0x4e45ecu;
    // NOP
    // 0x4e45f0: 0x0  nop
    ctx->pc = 0x4e45f0u;
    // NOP
    // 0x4e45f4: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e45f4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4e45f8: 0x0  nop
    ctx->pc = 0x4e45f8u;
    // NOP
    // 0x4e45fc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e45fcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4e4600: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e4600u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4e4604: 0x0  nop
    ctx->pc = 0x4e4604u;
    // NOP
    // 0x4e4608: 0x0  nop
    ctx->pc = 0x4e4608u;
    // NOP
    // 0x4e460c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e460cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_4e4610:
    // 0x4e4610: 0x0  nop
    ctx->pc = 0x4e4610u;
    // NOP
    // 0x4e4614: 0x0  nop
    ctx->pc = 0x4e4614u;
    // NOP
    // 0x4e4618: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e4618u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4e461c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e461cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    ctx->pc = 0x4e4620u;
}
