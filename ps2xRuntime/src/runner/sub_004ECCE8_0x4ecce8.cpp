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

// Function: sub_004ECCE8
// Address: 0x4ecce8 - 0x4eccf8
void sub_004ECCE8_0x4ecce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECCE8_0x4ecce8");
#endif

    ctx->pc = 0x4ecce8u;

    // 0x4ecce8: 0x706d6f63  .word       0x706D6F63                   # INVALID     $v1, $t5, 0x6F63 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ecce8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4ECCE8 raw=0x706D6F63");
    // 0x4eccec: 0x6974656c  ldl         $s4, 0x656C($t3)
    ctx->pc = 0x4eccecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25964); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x4eccf0: 0x253d6e6f  addiu       $sp, $t1, 0x6E6F
    ctx->pc = 0x4eccf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 9), 28271));
    // 0x4eccf4: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x4eccf4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x4eccf8u;
}
