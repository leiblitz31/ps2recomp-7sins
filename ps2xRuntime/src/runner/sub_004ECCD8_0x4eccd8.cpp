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

// Function: sub_004ECCD8
// Address: 0x4eccd8 - 0x4ecce8
void sub_004ECCD8_0x4eccd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECCD8_0x4eccd8");
#endif

    ctx->pc = 0x4eccd8u;

    // 0x4eccd8: 0x746f6870  .word       0x746F6870                   # INVALID     $v1, $t7, 0x6870 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4eccd8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ECCD8 raw=0x746F6870");
    // 0x4eccdc: 0x74735f6f  .word       0x74735F6F                   # INVALID     $v1, $s3, 0x5F6F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4eccdcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ECCDC raw=0x74735F6F");
    // 0x4ecce0: 0x646e61  .word       0x00646E61                   # addu        $t5, $v1, $a0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecce0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4ecce4: 0x0  nop
    ctx->pc = 0x4ecce4u;
    // NOP
    ctx->pc = 0x4ecce8u;
}
