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

// Function: sub_004E42B0
// Address: 0x4e42b0 - 0x4e42d0
void sub_004E42B0_0x4e42b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E42B0_0x4e42b0");
#endif

    ctx->pc = 0x4e42b0u;

    // 0x4e42b0: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e42b0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x4E42B0 raw=0x45435326");
    // 0x4e42b4: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e42b4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E42B4 raw=0x4352545F");
    // 0x4e42b8: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E42B8u;
    {
        const bool branch_taken_0x4e42b8 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e42b8) {
            ctx->pc = 0x4E42BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E42B8u;
            // 0x4e42bc: 0x52524f43  beql        $s2, $s2, . + 4 + (0x4F43 << 2) (Delay Slot)
            // Likely branch instruction at 0x4E42BC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F8FF0u;
            return;
        }
    }
    ctx->pc = 0x4E42C0u;
    // 0x4e42c0: 0x44545055  .word       0x44545055                   # cfc1        $s4, $10 # 00000055 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e42c0u;
    SET_GPR_U32(ctx, 20, 0); // Unimplemented FCR10
    // 0x4e42c4: 0x415441  .word       0x00415441                   # INVALID     $v0, $at, 0x5441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e42c4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4E42C4 raw=0x00415441");
    // 0x4e42c8: 0x0  nop
    ctx->pc = 0x4e42c8u;
    // NOP
    // 0x4e42cc: 0x0  nop
    ctx->pc = 0x4e42ccu;
    // NOP
    ctx->pc = 0x4e42d0u;
}
