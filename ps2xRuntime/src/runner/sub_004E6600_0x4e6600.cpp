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

// Function: sub_004E6600
// Address: 0x4e6600 - 0x4e6620
void sub_004E6600_0x4e6600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6600_0x4e6600");
#endif

    ctx->pc = 0x4e6600u;

    // 0x4e6600: 0x455f474d  .word       0x455F474D                   # INVALID     $t2, $ra, 0x474D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6600u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xD at 0x4E6600 raw=0x455F474D");
    // 0x4e6604: 0x69746f72  ldl         $s4, 0x6F72($t3)
    ctx->pc = 0x4e6604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28530); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x4e6608: 0x65724463  daddiu      $s2, $t3, 0x4463
    ctx->pc = 0x4e6608u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)17507);
    // 0x4e660c: 0x415f6d61  .word       0x415F6D61                   # INVALID     $t2, $ra, 0x6D61 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e660cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x4E660C raw=0x415F6D61");
    // 0x4e6610: 0x34  teq         $zero, $zero, 0
    ctx->pc = 0x4e6610u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e6614: 0x0  nop
    ctx->pc = 0x4e6614u;
    // NOP
    // 0x4e6618: 0x0  nop
    ctx->pc = 0x4e6618u;
    // NOP
    // 0x4e661c: 0x0  nop
    ctx->pc = 0x4e661cu;
    // NOP
    ctx->pc = 0x4e6620u;
}
