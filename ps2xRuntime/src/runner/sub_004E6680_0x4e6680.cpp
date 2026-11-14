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

// Function: sub_004E6680
// Address: 0x4e6680 - 0x4e6698
void sub_004E6680_0x4e6680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6680_0x4e6680");
#endif

    ctx->pc = 0x4e6680u;

    // 0x4e6680: 0x455f474d  .word       0x455F474D                   # INVALID     $t2, $ra, 0x474D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6680u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xD at 0x4E6680 raw=0x455F474D");
    // 0x4e6684: 0x69746f72  ldl         $s4, 0x6F72($t3)
    ctx->pc = 0x4e6684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28530); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x4e6688: 0x65724463  daddiu      $s2, $t3, 0x4463
    ctx->pc = 0x4e6688u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)17507);
    // 0x4e668c: 0x465f6d61  .word       0x465F6D61                   # INVALID     $s2, $ra, 0x6D61 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e668cu;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x21 at 0x4E668C raw=0x465F6D61");
    // 0x4e6690: 0x32656b61  andi        $a1, $s3, 0x6B61
    ctx->pc = 0x4e6690u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)27489);
    // 0x4e6694: 0x0  nop
    ctx->pc = 0x4e6694u;
    // NOP
    ctx->pc = 0x4e6698u;
}
