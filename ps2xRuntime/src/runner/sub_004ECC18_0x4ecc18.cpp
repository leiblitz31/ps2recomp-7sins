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

// Function: sub_004ECC18
// Address: 0x4ecc18 - 0x4ecc28
void sub_004ECC18_0x4ecc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECC18_0x4ecc18");
#endif

    ctx->pc = 0x4ecc18u;

    // 0x4ecc18: 0x6d6d7973  ldr         $t5, 0x7973($t3)
    ctx->pc = 0x4ecc18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 31091); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x4ecc1c: 0x69727465  ldl         $s2, 0x7465($t3)
    ctx->pc = 0x4ecc1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29797); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
    // 0x4ecc20: 0x73253d63  .word       0x73253D63                   # INVALID     $t9, $a1, 0x3D63 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ecc20u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4ECC20 raw=0x73253D63");
    // 0x4ecc24: 0x0  nop
    ctx->pc = 0x4ecc24u;
    // NOP
    ctx->pc = 0x4ecc28u;
}
