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

// Function: sub_004E6620
// Address: 0x4e6620 - 0x4e6640
void sub_004E6620_0x4e6620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6620_0x4e6620");
#endif

    ctx->pc = 0x4e6620u;

    // 0x4e6620: 0x455f474d  .word       0x455F474D                   # INVALID     $t2, $ra, 0x474D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6620u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xD at 0x4E6620 raw=0x455F474D");
    // 0x4e6624: 0x69746f72  ldl         $s4, 0x6F72($t3)
    ctx->pc = 0x4e6624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28530); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x4e6628: 0x65724463  daddiu      $s2, $t3, 0x4463
    ctx->pc = 0x4e6628u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)17507);
    // 0x4e662c: 0x415f6d61  .word       0x415F6D61                   # INVALID     $t2, $ra, 0x6D61 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e662cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x4E662C raw=0x415F6D61");
    // 0x4e6630: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6630u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x4E6630 raw=0x00000035");
    // 0x4e6634: 0x0  nop
    ctx->pc = 0x4e6634u;
    // NOP
    // 0x4e6638: 0x0  nop
    ctx->pc = 0x4e6638u;
    // NOP
    // 0x4e663c: 0x0  nop
    ctx->pc = 0x4e663cu;
    // NOP
    ctx->pc = 0x4e6640u;
}
