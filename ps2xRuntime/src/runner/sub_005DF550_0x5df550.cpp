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

// Function: sub_005DF550
// Address: 0x5df550 - 0x5df560
void sub_005DF550_0x5df550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DF550_0x5df550");
#endif

    ctx->pc = 0x5df550u;

    // 0x5df550: 0x20544f4e  addi        $s4, $v0, 0x4F4E
    ctx->pc = 0x5df550u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)20302, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
    // 0x5df554: 0x4c504d49  .word       0x4C504D49                   # INVALID     $v0, $s0, 0x4D49 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df554u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DF554 raw=0x4C504D49");
    // 0x5df558: 0x4e454d45  .word       0x4E454D45                   # INVALID     $s2, $a1, 0x4D45 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df558u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DF558 raw=0x4E454D45");
    // 0x5df55c: 0x444554  .word       0x00444554                   # dsllv       $t0, $a0, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5df55cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << (GPR_U32(ctx, 2) & 0x3F));
    ctx->pc = 0x5df560u;
}
