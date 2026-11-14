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

// Function: sub_004ED1E0
// Address: 0x4ed1e0 - 0x4ed200
void sub_004ED1E0_0x4ed1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED1E0_0x4ed1e0");
#endif

    ctx->pc = 0x4ed1e0u;

    // 0x4ed1e0: 0x702e7866  .word       0x702E7866                   # INVALID     $at, $t6, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed1e0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4ED1E0 raw=0x702E7866");
    // 0x4ed1e4: 0x6f69746f  ldr         $t1, 0x746F($k1)
    ctx->pc = 0x4ed1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29807); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4ed1e8: 0x75642e6e  .word       0x75642E6E                   # INVALID     $t3, $a0, 0x2E6E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed1e8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED1E8 raw=0x75642E6E");
    // 0x4ed1ec: 0x69746172  ldl         $s4, 0x6172($t3)
    ctx->pc = 0x4ed1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24946); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x4ed1f0: 0x6e6f  .word       0x00006E6F                   # dsubu       $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed1f0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
    // 0x4ed1f4: 0x0  nop
    ctx->pc = 0x4ed1f4u;
    // NOP
    // 0x4ed1f8: 0x0  nop
    ctx->pc = 0x4ed1f8u;
    // NOP
    // 0x4ed1fc: 0x0  nop
    ctx->pc = 0x4ed1fcu;
    // NOP
    ctx->pc = 0x4ed200u;
}
