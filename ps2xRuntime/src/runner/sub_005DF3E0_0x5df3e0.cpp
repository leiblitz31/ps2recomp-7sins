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

// Function: sub_005DF3E0
// Address: 0x5df3e0 - 0x5df400
void sub_005DF3E0_0x5df3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DF3E0_0x5df3e0");
#endif

    ctx->pc = 0x5df3e0u;

    // 0x5df3e0: 0x6e206e46  ldr         $zero, 0x6E46($s1)
    ctx->pc = 0x5df3e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 28230); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x5df3e4: 0x7220746f  .word       0x7220746F                   # INVALID     $s1, $zero, 0x746F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df3e4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x5DF3E4 raw=0x7220746F");
    // 0x5df3e8: 0x73696765  .word       0x73696765                   # INVALID     $k1, $t1, 0x6765 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df3e8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x5DF3E8 raw=0x73696765");
    // 0x5df3ec: 0x65726574  daddiu      $s2, $t3, 0x6574
    ctx->pc = 0x5df3ecu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25972);
    // 0x5df3f0: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5df3f0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
    // 0x5df3f4: 0x0  nop
    ctx->pc = 0x5df3f4u;
    // NOP
    // 0x5df3f8: 0x0  nop
    ctx->pc = 0x5df3f8u;
    // NOP
    // 0x5df3fc: 0x0  nop
    ctx->pc = 0x5df3fcu;
    // NOP
    ctx->pc = 0x5df400u;
}
