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

// Function: sub_004EC730
// Address: 0x4ec730 - 0x4ec750
void sub_004EC730_0x4ec730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC730_0x4ec730");
#endif

    ctx->pc = 0x4ec730u;

    // 0x4ec730: 0x6c696b73  ldr         $t1, 0x6B73($v1)
    ctx->pc = 0x4ec730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4ec734: 0x72642e6c  .word       0x72642E6C                   # INVALID     $s3, $a0, 0x2E6C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ec734u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x4EC734 raw=0x72642E6C");
    // 0x4ec738: 0x6575676f  daddiu      $s5, $t3, 0x676F
    ctx->pc = 0x4ec738u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26479);
    // 0x4ec73c: 0x6e65732e  ldr         $a1, 0x732E($s3)
    ctx->pc = 0x4ec73cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29486); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4ec740: 0x69746973  ldl         $s4, 0x6973($t3)
    ctx->pc = 0x4ec740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26995); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x4ec744: 0x79746976  lq          $s4, 0x6976($t3)
    ctx->pc = 0x4ec744u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 11), 26998)));
    // 0x4ec748: 0x0  nop
    ctx->pc = 0x4ec748u;
    // NOP
    // 0x4ec74c: 0x0  nop
    ctx->pc = 0x4ec74cu;
    // NOP
    ctx->pc = 0x4ec750u;
}
