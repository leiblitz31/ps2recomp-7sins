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

// Function: sub_004E42D0
// Address: 0x4e42d0 - 0x4e4300
void sub_004E42D0_0x4e42d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E42D0_0x4e42d0");
#endif

    ctx->pc = 0x4e42d0u;

    // 0x4e42d0: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e42d0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x4E42D0 raw=0x45435326");
    // 0x4e42d4: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e42d4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E42D4 raw=0x4352545F");
    // 0x4e42d8: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E42D8u;
    {
        const bool branch_taken_0x4e42d8 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e42d8) {
            ctx->pc = 0x4E42DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E42D8u;
            // 0x4e42dc: 0x535f434d  beql        $k0, $ra, . + 4 + (0x434D << 2) (Delay Slot)
            // Likely branch instruction at 0x4E42DC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F9010u;
            return;
        }
    }
    ctx->pc = 0x4E42E0u;
    // 0x4e42e0: 0x5f455641  .word       0x5F455641                   # bgtzl       $k0, . + 4 + (0x5641 << 2) # 00050000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E42E0u;
    {
        const bool branch_taken_0x4e42e0 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e42e0) {
            ctx->pc = 0x4E42E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E42E0u;
            // 0x4e42e4: 0x55534e49  bnel        $t2, $s3, . + 4 + (0x4E49 << 2) (Delay Slot)
            // Likely branch instruction at 0x4E42E4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F9BE8u;
            return;
        }
    }
    ctx->pc = 0x4E42E8u;
    // 0x4e42e8: 0x43494646  .word       0x43494646                   # INVALID     $k0, $t1, 0x4646 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e42e8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E42E8 raw=0x43494646");
    // 0x4e42ec: 0x544e4549  bnel        $v0, $t6, . + 4 + (0x4549 << 2)
    ctx->pc = 0x4E42ECu;
    {
        const bool branch_taken_0x4e42ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 14));
        if (branch_taken_0x4e42ec) {
            ctx->pc = 0x4E42F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E42ECu;
            // 0x4e42f0: 0x43415053  .word       0x43415053                   # INVALID     $k0, $at, 0x5053 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E42F0 raw=0x43415053");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F5814u;
            return;
        }
    }
    ctx->pc = 0x4E42F4u;
    // 0x4e42f4: 0x45  .word       0x00000045                   # INVALID     $zero, $zero, 0x45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e42f4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x4E42F4 raw=0x00000045");
    // 0x4e42f8: 0x0  nop
    ctx->pc = 0x4e42f8u;
    // NOP
    // 0x4e42fc: 0x0  nop
    ctx->pc = 0x4e42fcu;
    // NOP
    ctx->pc = 0x4e4300u;
}
