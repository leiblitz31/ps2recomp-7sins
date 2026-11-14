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

// Function: sub_004E7080
// Address: 0x4e7080 - 0x4e70a0
void sub_004E7080_0x4e7080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E7080_0x4e7080");
#endif

    ctx->pc = 0x4e7080u;

    // 0x4e7080: 0x46474d26  .word       0x46474D26                   # INVALID     $s2, $a3, 0x4D26 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e7080u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x26 at 0x4E7080 raw=0x46474D26");
    // 0x4e7084: 0x414c5f4c  .word       0x414C5F4C                   # INVALID     $t2, $t4, 0x5F4C # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e7084u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x4E7084 raw=0x414C5F4C");
    // 0x4e7088: 0x48434e55  .word       0x48434E55                   # cfc2.i      $v1, $vi9 # 00000654 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x4e7088u;
    SET_GPR_U32(ctx, 3, static_cast<uint32_t>(ctx->vi[9]));
    // 0x4e708c: 0x4e45504f  .word       0x4E45504F                   # INVALID     $s2, $a1, 0x504F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e708cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E708C raw=0x4E45504F");
    // 0x4e7090: 0x0  nop
    ctx->pc = 0x4e7090u;
    // NOP
    // 0x4e7094: 0x0  nop
    ctx->pc = 0x4e7094u;
    // NOP
    // 0x4e7098: 0x0  nop
    ctx->pc = 0x4e7098u;
    // NOP
    // 0x4e709c: 0x0  nop
    ctx->pc = 0x4e709cu;
    // NOP
    ctx->pc = 0x4e70a0u;
}
