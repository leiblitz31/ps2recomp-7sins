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

// Function: sub_005DF2F0
// Address: 0x5df2f0 - 0x5df320
void sub_005DF2F0_0x5df2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DF2F0_0x5df2f0");
#endif

    ctx->pc = 0x5df2f0u;

    // 0x5df2f0: 0x466d756e  .word       0x466D756E                   # INVALID     $s3, $t5, 0x756E # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5df2f0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0x2E at 0x5DF2F0 raw=0x466D756E");
    // 0x5df2f4: 0x45656c69  .word       0x45656C69                   # INVALID     $t3, $a1, 0x6C69 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5df2f4u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xB, function 0x29 at 0x5DF2F4 raw=0x45656C69");
    // 0x5df2f8: 0x6972746e  ldl         $s2, 0x746E($t3)
    ctx->pc = 0x5df2f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29806); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
    // 0x5df2fc: 0x3c207365  .word       0x3C207365                   # lui         $zero, 0x7365 # 00200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df2fcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)29541 << 16));
    // 0x5df300: 0x554e203d  bnel        $t2, $t6, . + 4 + (0x203D << 2)
    ctx->pc = 0x5DF300u;
    {
        const bool branch_taken_0x5df300 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 14));
        if (branch_taken_0x5df300) {
            ctx->pc = 0x5DF304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DF300u;
            // 0x5df304: 0x49465f4d  .word       0x49465F4D                   # INVALID     $t2, $a2, 0x5F4D # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
            throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5DF304 raw=0x49465F4D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5E73F8u;
            return;
        }
    }
    ctx->pc = 0x5DF308u;
    // 0x5df308: 0x455f454c  .word       0x455F454C                   # INVALID     $t2, $ra, 0x454C # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5df308u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xC at 0x5DF308 raw=0x455F454C");
    // 0x5df30c: 0x4952544e  .word       0x4952544E                   # INVALID     $t2, $s2, 0x544E # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5df30cu;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5DF30C raw=0x4952544E");
    // 0x5df310: 0x545f5345  bnel        $v0, $ra, . + 4 + (0x5345 << 2)
    ctx->pc = 0x5DF310u;
    {
        const bool branch_taken_0x5df310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 31));
        if (branch_taken_0x5df310) {
            ctx->pc = 0x5DF314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DF310u;
            // 0x5df314: 0x45475f4f  .word       0x45475F4F                   # INVALID     $t2, $a3, 0x5F4F # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xF at 0x5DF314 raw=0x45475F4F");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F4028u;
            return;
        }
    }
    ctx->pc = 0x5DF318u;
    // 0x5df318: 0x54  .word       0x00000054                   # dsllv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5df318u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
    // 0x5df31c: 0x0  nop
    ctx->pc = 0x5df31cu;
    // NOP
    ctx->pc = 0x5df320u;
}
