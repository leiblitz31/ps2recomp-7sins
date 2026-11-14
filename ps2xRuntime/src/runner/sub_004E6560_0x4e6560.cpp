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

// Function: sub_004E6560
// Address: 0x4e6560 - 0x4e6580
void sub_004E6560_0x4e6560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6560_0x4e6560");
#endif

    switch (ctx->pc) {
        case 0x4e6568u: goto label_4e6568;
        default: break;
    }

    ctx->pc = 0x4e6560u;

    // 0x4e6560: 0x455f474d  .word       0x455F474D                   # INVALID     $t2, $ra, 0x474D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6560u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xD at 0x4E6560 raw=0x455F474D");
    // 0x4e6564: 0x69746f72  ldl         $s4, 0x6F72($t3)
    ctx->pc = 0x4e6564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28530); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_4e6568:
    // 0x4e6568: 0x65724463  daddiu      $s2, $t3, 0x4463
    ctx->pc = 0x4e6568u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)17507);
    // 0x4e656c: 0x455f6d61  .word       0x455F6D61                   # INVALID     $t2, $ra, 0x6D61 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e656cu;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x21 at 0x4E656C raw=0x455F6D61");
    // 0x4e6570: 0x646e  .word       0x0000646E                   # dsub        $t4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6570u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
    // 0x4e6574: 0x0  nop
    ctx->pc = 0x4e6574u;
    // NOP
    // 0x4e6578: 0x0  nop
    ctx->pc = 0x4e6578u;
    // NOP
    // 0x4e657c: 0x0  nop
    ctx->pc = 0x4e657cu;
    // NOP
    ctx->pc = 0x4e6580u;
}
