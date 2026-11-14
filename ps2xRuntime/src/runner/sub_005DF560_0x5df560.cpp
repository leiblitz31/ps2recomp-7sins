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

// Function: sub_005DF560
// Address: 0x5df560 - 0x5df580
void sub_005DF560_0x5df560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DF560_0x5df560");
#endif

    ctx->pc = 0x5df560u;

    // 0x5df560: 0x65526670  daddiu      $s2, $t2, 0x6670
    ctx->pc = 0x5df560u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)26224);
    // 0x5df564: 0x746c7573  .word       0x746C7573                   # INVALID     $v1, $t4, 0x7573 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df564u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DF564 raw=0x746C7573");
    // 0x5df568: 0x203d2120  addi        $sp, $at, 0x2120
    ctx->pc = 0x5df568u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8480, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
    // 0x5df56c: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df56cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DF56C raw=0x4C4C554E");
    // 0x5df570: 0x0  nop
    ctx->pc = 0x5df570u;
    // NOP
    // 0x5df574: 0x0  nop
    ctx->pc = 0x5df574u;
    // NOP
    // 0x5df578: 0x0  nop
    ctx->pc = 0x5df578u;
    // NOP
    // 0x5df57c: 0x0  nop
    ctx->pc = 0x5df57cu;
    // NOP
    ctx->pc = 0x5df580u;
}
