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

// Function: sub_004E65C0
// Address: 0x4e65c0 - 0x4e65e0
void sub_004E65C0_0x4e65c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E65C0_0x4e65c0");
#endif

    ctx->pc = 0x4e65c0u;

    // 0x4e65c0: 0x455f474d  .word       0x455F474D                   # INVALID     $t2, $ra, 0x474D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e65c0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xD at 0x4E65C0 raw=0x455F474D");
    // 0x4e65c4: 0x69746f72  ldl         $s4, 0x6F72($t3)
    ctx->pc = 0x4e65c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28530); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x4e65c8: 0x65724463  daddiu      $s2, $t3, 0x4463
    ctx->pc = 0x4e65c8u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)17507);
    // 0x4e65cc: 0x415f6d61  .word       0x415F6D61                   # INVALID     $t2, $ra, 0x6D61 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e65ccu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x4E65CC raw=0x415F6D61");
    // 0x4e65d0: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x4e65d0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e65d4: 0x0  nop
    ctx->pc = 0x4e65d4u;
    // NOP
    // 0x4e65d8: 0x0  nop
    ctx->pc = 0x4e65d8u;
    // NOP
    // 0x4e65dc: 0x0  nop
    ctx->pc = 0x4e65dcu;
    // NOP
    ctx->pc = 0x4e65e0u;
}
