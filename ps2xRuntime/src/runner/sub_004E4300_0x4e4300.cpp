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

// Function: sub_004E4300
// Address: 0x4e4300 - 0x4e4340
void sub_004E4300_0x4e4300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4300_0x4e4300");
#endif

    switch (ctx->pc) {
        case 0x4e4338u: goto label_4e4338;
        default: break;
    }

    ctx->pc = 0x4e4300u;

    // 0x4e4300: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e4300u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x4E4300 raw=0x45435326");
    // 0x4e4304: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e4304u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E4304 raw=0x4352545F");
    // 0x4e4308: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4308u;
    {
        const bool branch_taken_0x4e4308 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e4308) {
            ctx->pc = 0x4E430Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4308u;
            // 0x4e430c: 0x535f434d  beql        $k0, $ra, . + 4 + (0x434D << 2) (Delay Slot)
            // Likely branch instruction at 0x4E430C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F9040u;
            return;
        }
    }
    ctx->pc = 0x4E4310u;
    // 0x4e4310: 0x5f455641  .word       0x5F455641                   # bgtzl       $k0, . + 4 + (0x5641 << 2) # 00050000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4310u;
    {
        const bool branch_taken_0x4e4310 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e4310) {
            ctx->pc = 0x4E4314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4310u;
            // 0x4e4314: 0x55534e49  bnel        $t2, $s3, . + 4 + (0x4E49 << 2) (Delay Slot)
            // Likely branch instruction at 0x4E4314 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F9C18u;
            return;
        }
    }
    ctx->pc = 0x4E4318u;
    // 0x4e4318: 0x43494646  .word       0x43494646                   # INVALID     $k0, $t1, 0x4646 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e4318u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E4318 raw=0x43494646");
    // 0x4e431c: 0x544e4549  bnel        $v0, $t6, . + 4 + (0x4549 << 2)
    ctx->pc = 0x4E431Cu;
    {
        const bool branch_taken_0x4e431c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 14));
        if (branch_taken_0x4e431c) {
            ctx->pc = 0x4E4320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E431Cu;
            // 0x4e4320: 0x43415053  .word       0x43415053                   # INVALID     $k0, $at, 0x5053 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E4320 raw=0x43415053");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F5844u;
            return;
        }
    }
    ctx->pc = 0x4E4324u;
    // 0x4e4324: 0x4e495f45  .word       0x4E495F45                   # INVALID     $s2, $t1, 0x5F45 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e4324u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E4324 raw=0x4E495F45");
    // 0x4e4328: 0x45544956  .word       0x45544956                   # INVALID     $t2, $s4, 0x4956 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e4328u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x16 at 0x4E4328 raw=0x45544956");
    // 0x4e432c: 0x5245564f  beql        $s2, $a1, . + 4 + (0x564F << 2)
    ctx->pc = 0x4E432Cu;
    {
        const bool branch_taken_0x4e432c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        if (branch_taken_0x4e432c) {
            ctx->pc = 0x4E4330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E432Cu;
            // 0x4e4330: 0x54495257  bnel        $v0, $t1, . + 4 + (0x5257 << 2) (Delay Slot)
            // Likely branch instruction at 0x4E4330 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F9C6Cu;
            return;
        }
    }
    ctx->pc = 0x4E4334u;
    // 0x4e4334: 0x45  .word       0x00000045                   # INVALID     $zero, $zero, 0x45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4334u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x4E4334 raw=0x00000045");
label_4e4338:
    // 0x4e4338: 0x0  nop
    ctx->pc = 0x4e4338u;
    // NOP
    // 0x4e433c: 0x0  nop
    ctx->pc = 0x4e433cu;
    // NOP
    ctx->pc = 0x4e4340u;
}
