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

// Function: sub_004E11D8
// Address: 0x4e11d8 - 0x4e11e8
void sub_004E11D8_0x4e11d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E11D8_0x4e11d8");
#endif

    ctx->pc = 0x4e11d8u;

    // 0x4e11d8: 0x464b4150  .word       0x464B4150                   # INVALID     $s2, $t3, 0x4150 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e11d8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x10 at 0x4E11D8 raw=0x464B4150");
    // 0x4e11dc: 0x20454c49  addi        $a1, $v0, 0x4C49
    ctx->pc = 0x4e11dcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)19529, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x4e11e0: 0x4f202020  .word       0x4F202020                   # INVALID     $t9, $zero, 0x2020 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e11e0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E11E0 raw=0x4F202020");
    // 0x4e11e4: 0xa4e  .word       0x00000A4E                   # INVALID     $zero, $zero, 0xA4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e11e4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x4E11E4 raw=0x00000A4E");
    ctx->pc = 0x4e11e8u;
}
