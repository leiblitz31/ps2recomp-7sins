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

// Function: sub_004E2AC0
// Address: 0x4e2ac0 - 0x4e2e40
void sub_004E2AC0_0x4e2ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2AC0_0x4e2ac0");
#endif

    switch (ctx->pc) {
        case 0x4e2ac0u: goto label_4e2ac0;
        case 0x4e2ac4u: goto label_4e2ac4;
        case 0x4e2ac8u: goto label_4e2ac8;
        case 0x4e2accu: goto label_4e2acc;
        case 0x4e2ad0u: goto label_4e2ad0;
        case 0x4e2ad4u: goto label_4e2ad4;
        case 0x4e2ad8u: goto label_4e2ad8;
        case 0x4e2adcu: goto label_4e2adc;
        case 0x4e2ae0u: goto label_4e2ae0;
        case 0x4e2ae4u: goto label_4e2ae4;
        case 0x4e2ae8u: goto label_4e2ae8;
        case 0x4e2aecu: goto label_4e2aec;
        case 0x4e2af0u: goto label_4e2af0;
        case 0x4e2af4u: goto label_4e2af4;
        case 0x4e2af8u: goto label_4e2af8;
        case 0x4e2afcu: goto label_4e2afc;
        case 0x4e2b00u: goto label_4e2b00;
        case 0x4e2b04u: goto label_4e2b04;
        case 0x4e2b08u: goto label_4e2b08;
        case 0x4e2b0cu: goto label_4e2b0c;
        case 0x4e2b10u: goto label_4e2b10;
        case 0x4e2b14u: goto label_4e2b14;
        case 0x4e2b18u: goto label_4e2b18;
        case 0x4e2b1cu: goto label_4e2b1c;
        case 0x4e2b20u: goto label_4e2b20;
        case 0x4e2b24u: goto label_4e2b24;
        case 0x4e2b28u: goto label_4e2b28;
        case 0x4e2b2cu: goto label_4e2b2c;
        case 0x4e2b30u: goto label_4e2b30;
        case 0x4e2b34u: goto label_4e2b34;
        case 0x4e2b38u: goto label_4e2b38;
        case 0x4e2b3cu: goto label_4e2b3c;
        case 0x4e2b40u: goto label_4e2b40;
        case 0x4e2b44u: goto label_4e2b44;
        case 0x4e2b48u: goto label_4e2b48;
        case 0x4e2b4cu: goto label_4e2b4c;
        case 0x4e2b50u: goto label_4e2b50;
        case 0x4e2b54u: goto label_4e2b54;
        case 0x4e2b58u: goto label_4e2b58;
        case 0x4e2b5cu: goto label_4e2b5c;
        case 0x4e2b60u: goto label_4e2b60;
        case 0x4e2b64u: goto label_4e2b64;
        case 0x4e2b68u: goto label_4e2b68;
        case 0x4e2b6cu: goto label_4e2b6c;
        case 0x4e2b70u: goto label_4e2b70;
        case 0x4e2b74u: goto label_4e2b74;
        case 0x4e2b78u: goto label_4e2b78;
        case 0x4e2b7cu: goto label_4e2b7c;
        case 0x4e2b80u: goto label_4e2b80;
        case 0x4e2b84u: goto label_4e2b84;
        case 0x4e2b88u: goto label_4e2b88;
        case 0x4e2b8cu: goto label_4e2b8c;
        case 0x4e2b90u: goto label_4e2b90;
        case 0x4e2b94u: goto label_4e2b94;
        case 0x4e2b98u: goto label_4e2b98;
        case 0x4e2b9cu: goto label_4e2b9c;
        case 0x4e2ba0u: goto label_4e2ba0;
        case 0x4e2ba4u: goto label_4e2ba4;
        case 0x4e2ba8u: goto label_4e2ba8;
        case 0x4e2bacu: goto label_4e2bac;
        case 0x4e2bb0u: goto label_4e2bb0;
        case 0x4e2bb4u: goto label_4e2bb4;
        case 0x4e2bb8u: goto label_4e2bb8;
        case 0x4e2bbcu: goto label_4e2bbc;
        case 0x4e2bc0u: goto label_4e2bc0;
        case 0x4e2bc4u: goto label_4e2bc4;
        case 0x4e2bc8u: goto label_4e2bc8;
        case 0x4e2bccu: goto label_4e2bcc;
        case 0x4e2bd0u: goto label_4e2bd0;
        case 0x4e2bd4u: goto label_4e2bd4;
        case 0x4e2bd8u: goto label_4e2bd8;
        case 0x4e2bdcu: goto label_4e2bdc;
        case 0x4e2be0u: goto label_4e2be0;
        case 0x4e2be4u: goto label_4e2be4;
        case 0x4e2be8u: goto label_4e2be8;
        case 0x4e2becu: goto label_4e2bec;
        case 0x4e2bf0u: goto label_4e2bf0;
        case 0x4e2bf4u: goto label_4e2bf4;
        case 0x4e2bf8u: goto label_4e2bf8;
        case 0x4e2bfcu: goto label_4e2bfc;
        case 0x4e2c00u: goto label_4e2c00;
        case 0x4e2c04u: goto label_4e2c04;
        case 0x4e2c08u: goto label_4e2c08;
        case 0x4e2c0cu: goto label_4e2c0c;
        case 0x4e2c10u: goto label_4e2c10;
        case 0x4e2c14u: goto label_4e2c14;
        case 0x4e2c18u: goto label_4e2c18;
        case 0x4e2c1cu: goto label_4e2c1c;
        case 0x4e2c20u: goto label_4e2c20;
        case 0x4e2c24u: goto label_4e2c24;
        case 0x4e2c28u: goto label_4e2c28;
        case 0x4e2c2cu: goto label_4e2c2c;
        case 0x4e2c30u: goto label_4e2c30;
        case 0x4e2c34u: goto label_4e2c34;
        case 0x4e2c38u: goto label_4e2c38;
        case 0x4e2c3cu: goto label_4e2c3c;
        case 0x4e2c40u: goto label_4e2c40;
        case 0x4e2c44u: goto label_4e2c44;
        case 0x4e2c48u: goto label_4e2c48;
        case 0x4e2c4cu: goto label_4e2c4c;
        case 0x4e2c50u: goto label_4e2c50;
        case 0x4e2c54u: goto label_4e2c54;
        case 0x4e2c58u: goto label_4e2c58;
        case 0x4e2c5cu: goto label_4e2c5c;
        case 0x4e2c60u: goto label_4e2c60;
        case 0x4e2c64u: goto label_4e2c64;
        case 0x4e2c68u: goto label_4e2c68;
        case 0x4e2c6cu: goto label_4e2c6c;
        case 0x4e2c70u: goto label_4e2c70;
        case 0x4e2c74u: goto label_4e2c74;
        case 0x4e2c78u: goto label_4e2c78;
        case 0x4e2c7cu: goto label_4e2c7c;
        case 0x4e2c80u: goto label_4e2c80;
        case 0x4e2c84u: goto label_4e2c84;
        case 0x4e2c88u: goto label_4e2c88;
        case 0x4e2c8cu: goto label_4e2c8c;
        case 0x4e2c90u: goto label_4e2c90;
        case 0x4e2c94u: goto label_4e2c94;
        case 0x4e2c98u: goto label_4e2c98;
        case 0x4e2c9cu: goto label_4e2c9c;
        case 0x4e2ca0u: goto label_4e2ca0;
        case 0x4e2ca4u: goto label_4e2ca4;
        case 0x4e2ca8u: goto label_4e2ca8;
        case 0x4e2cacu: goto label_4e2cac;
        case 0x4e2cb0u: goto label_4e2cb0;
        case 0x4e2cb4u: goto label_4e2cb4;
        case 0x4e2cb8u: goto label_4e2cb8;
        case 0x4e2cbcu: goto label_4e2cbc;
        case 0x4e2cc0u: goto label_4e2cc0;
        case 0x4e2cc4u: goto label_4e2cc4;
        case 0x4e2cc8u: goto label_4e2cc8;
        case 0x4e2cccu: goto label_4e2ccc;
        case 0x4e2cd0u: goto label_4e2cd0;
        case 0x4e2cd4u: goto label_4e2cd4;
        case 0x4e2cd8u: goto label_4e2cd8;
        case 0x4e2cdcu: goto label_4e2cdc;
        case 0x4e2ce0u: goto label_4e2ce0;
        case 0x4e2ce4u: goto label_4e2ce4;
        case 0x4e2ce8u: goto label_4e2ce8;
        case 0x4e2cecu: goto label_4e2cec;
        case 0x4e2cf0u: goto label_4e2cf0;
        case 0x4e2cf4u: goto label_4e2cf4;
        case 0x4e2cf8u: goto label_4e2cf8;
        case 0x4e2cfcu: goto label_4e2cfc;
        case 0x4e2d00u: goto label_4e2d00;
        case 0x4e2d04u: goto label_4e2d04;
        case 0x4e2d08u: goto label_4e2d08;
        case 0x4e2d0cu: goto label_4e2d0c;
        case 0x4e2d10u: goto label_4e2d10;
        case 0x4e2d14u: goto label_4e2d14;
        case 0x4e2d18u: goto label_4e2d18;
        case 0x4e2d1cu: goto label_4e2d1c;
        case 0x4e2d20u: goto label_4e2d20;
        case 0x4e2d24u: goto label_4e2d24;
        case 0x4e2d28u: goto label_4e2d28;
        case 0x4e2d2cu: goto label_4e2d2c;
        case 0x4e2d30u: goto label_4e2d30;
        case 0x4e2d34u: goto label_4e2d34;
        case 0x4e2d38u: goto label_4e2d38;
        case 0x4e2d3cu: goto label_4e2d3c;
        case 0x4e2d40u: goto label_4e2d40;
        case 0x4e2d44u: goto label_4e2d44;
        case 0x4e2d48u: goto label_4e2d48;
        case 0x4e2d4cu: goto label_4e2d4c;
        case 0x4e2d50u: goto label_4e2d50;
        case 0x4e2d54u: goto label_4e2d54;
        case 0x4e2d58u: goto label_4e2d58;
        case 0x4e2d5cu: goto label_4e2d5c;
        case 0x4e2d60u: goto label_4e2d60;
        case 0x4e2d64u: goto label_4e2d64;
        case 0x4e2d68u: goto label_4e2d68;
        case 0x4e2d6cu: goto label_4e2d6c;
        case 0x4e2d70u: goto label_4e2d70;
        case 0x4e2d74u: goto label_4e2d74;
        case 0x4e2d78u: goto label_4e2d78;
        case 0x4e2d7cu: goto label_4e2d7c;
        case 0x4e2d80u: goto label_4e2d80;
        case 0x4e2d84u: goto label_4e2d84;
        case 0x4e2d88u: goto label_4e2d88;
        case 0x4e2d8cu: goto label_4e2d8c;
        case 0x4e2d90u: goto label_4e2d90;
        case 0x4e2d94u: goto label_4e2d94;
        case 0x4e2d98u: goto label_4e2d98;
        case 0x4e2d9cu: goto label_4e2d9c;
        case 0x4e2da0u: goto label_4e2da0;
        case 0x4e2da4u: goto label_4e2da4;
        case 0x4e2da8u: goto label_4e2da8;
        case 0x4e2dacu: goto label_4e2dac;
        case 0x4e2db0u: goto label_4e2db0;
        case 0x4e2db4u: goto label_4e2db4;
        case 0x4e2db8u: goto label_4e2db8;
        case 0x4e2dbcu: goto label_4e2dbc;
        case 0x4e2dc0u: goto label_4e2dc0;
        case 0x4e2dc4u: goto label_4e2dc4;
        case 0x4e2dc8u: goto label_4e2dc8;
        case 0x4e2dccu: goto label_4e2dcc;
        case 0x4e2dd0u: goto label_4e2dd0;
        case 0x4e2dd4u: goto label_4e2dd4;
        case 0x4e2dd8u: goto label_4e2dd8;
        case 0x4e2ddcu: goto label_4e2ddc;
        case 0x4e2de0u: goto label_4e2de0;
        case 0x4e2de4u: goto label_4e2de4;
        case 0x4e2de8u: goto label_4e2de8;
        case 0x4e2decu: goto label_4e2dec;
        case 0x4e2df0u: goto label_4e2df0;
        case 0x4e2df4u: goto label_4e2df4;
        case 0x4e2df8u: goto label_4e2df8;
        case 0x4e2dfcu: goto label_4e2dfc;
        case 0x4e2e00u: goto label_4e2e00;
        case 0x4e2e04u: goto label_4e2e04;
        case 0x4e2e08u: goto label_4e2e08;
        case 0x4e2e0cu: goto label_4e2e0c;
        case 0x4e2e10u: goto label_4e2e10;
        case 0x4e2e14u: goto label_4e2e14;
        case 0x4e2e18u: goto label_4e2e18;
        case 0x4e2e1cu: goto label_4e2e1c;
        case 0x4e2e20u: goto label_4e2e20;
        case 0x4e2e24u: goto label_4e2e24;
        case 0x4e2e28u: goto label_4e2e28;
        case 0x4e2e2cu: goto label_4e2e2c;
        case 0x4e2e30u: goto label_4e2e30;
        case 0x4e2e34u: goto label_4e2e34;
        case 0x4e2e38u: goto label_4e2e38;
        case 0x4e2e3cu: goto label_4e2e3c;
        default: break;
    }

    ctx->pc = 0x4e2ac0u;

label_4e2ac0:
    // 0x4e2ac0: 0x702e6169  .word       0x702E6169                   # INVALID     $at, $t6, 0x6169 # 00000000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x4e2ac0u;
    throw std::runtime_error("Unhandled MMI3 instruction: function 0x5 at 0x4E2AC0 raw=0x702E6169");
label_4e2ac4:
    // 0x4e2ac4: 0x7265776f  .word       0x7265776F                   # INVALID     $s3, $a1, 0x776F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e2ac4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x4E2AC4 raw=0x7265776F");
label_4e2ac8:
    // 0x4e2ac8: 0x0  nop
    ctx->pc = 0x4e2ac8u;
    // NOP
label_4e2acc:
    // 0x4e2acc: 0x0  nop
    ctx->pc = 0x4e2accu;
    // NOP
label_4e2ad0:
    // 0x4e2ad0: 0x593c0110  .word       0x593C0110                   # blezl       $t1, . + 4 + (0x110 << 2) # 001C0000 <InstrIdType: CPU_NORMAL>
label_4e2ad4:
    if (ctx->pc == 0x4E2AD4u) {
        ctx->pc = 0x4E2AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2AD0u;
        // 0x4e2ad4: 0xaa670110  swl         $a3, 0x110($s3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 19), 272); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2AD8u;
        goto label_4e2ad8;
    }
    ctx->pc = 0x4E2AD0u;
    {
        const bool branch_taken_0x4e2ad0 = (GPR_S32(ctx, 9) <= 0);
        if (branch_taken_0x4e2ad0) {
            ctx->pc = 0x4E2AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2AD0u;
            // 0x4e2ad4: 0xaa670110  swl         $a3, 0x110($s3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 19), 272); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2F14u;
            return;
        }
    }
    ctx->pc = 0x4E2AD8u;
label_4e2ad8:
    // 0x4e2ad8: 0xaa670111  swl         $a3, 0x111($s3)
    ctx->pc = 0x4e2ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 273); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_4e2adc:
    // 0x4e2adc: 0x593c010e  .word       0x593C010E                   # blezl       $t1, . + 4 + (0x10E << 2) # 001C0000 <InstrIdType: CPU_NORMAL>
label_4e2ae0:
    if (ctx->pc == 0x4E2AE0u) {
        ctx->pc = 0x4E2AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2ADCu;
        // 0x4e2ae0: 0x593c0113  .word       0x593C0113                   # blezl       $t1, . + 4 + (0x113 << 2) # 001C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x4E2AE0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2AE4u;
        goto label_4e2ae4;
    }
    ctx->pc = 0x4E2ADCu;
    {
        const bool branch_taken_0x4e2adc = (GPR_S32(ctx, 9) <= 0);
        if (branch_taken_0x4e2adc) {
            ctx->pc = 0x4E2AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2ADCu;
            // 0x4e2ae0: 0x593c0113  .word       0x593C0113                   # blezl       $t1, . + 4 + (0x113 << 2) # 001C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E2AE0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E2F18u;
            return;
        }
    }
    ctx->pc = 0x4E2AE4u;
label_4e2ae4:
    // 0x4e2ae4: 0x0  nop
    ctx->pc = 0x4e2ae4u;
    // NOP
label_4e2ae8:
    // 0x4e2ae8: 0x0  nop
    ctx->pc = 0x4e2ae8u;
    // NOP
label_4e2aec:
    // 0x4e2aec: 0x0  nop
    ctx->pc = 0x4e2aecu;
    // NOP
label_4e2af0:
    // 0x4e2af0: 0x309e0270  andi        $fp, $a0, 0x270
    ctx->pc = 0x4e2af0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)624);
label_4e2af4:
    // 0x4e2af4: 0x309e0271  andi        $fp, $a0, 0x271
    ctx->pc = 0x4e2af4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)625);
label_4e2af8:
    // 0x4e2af8: 0x309e026b  andi        $fp, $a0, 0x26B
    ctx->pc = 0x4e2af8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)619);
label_4e2afc:
    // 0x4e2afc: 0x309e026e  andi        $fp, $a0, 0x26E
    ctx->pc = 0x4e2afcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)622);
label_4e2b00:
    // 0x4e2b00: 0x309e026a  andi        $fp, $a0, 0x26A
    ctx->pc = 0x4e2b00u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)618);
label_4e2b04:
    // 0x4e2b04: 0x309e0269  andi        $fp, $a0, 0x269
    ctx->pc = 0x4e2b04u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)617);
label_4e2b08:
    // 0x4e2b08: 0x309e0266  andi        $fp, $a0, 0x266
    ctx->pc = 0x4e2b08u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)614);
label_4e2b0c:
    // 0x4e2b0c: 0x309e0267  andi        $fp, $a0, 0x267
    ctx->pc = 0x4e2b0cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)615);
label_4e2b10:
    // 0x4e2b10: 0x309e0107  andi        $fp, $a0, 0x107
    ctx->pc = 0x4e2b10u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)263);
label_4e2b14:
    // 0x4e2b14: 0x309e010b  andi        $fp, $a0, 0x10B
    ctx->pc = 0x4e2b14u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)267);
label_4e2b18:
    // 0x4e2b18: 0x309e010c  andi        $fp, $a0, 0x10C
    ctx->pc = 0x4e2b18u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)268);
label_4e2b1c:
    // 0x4e2b1c: 0x309e0111  andi        $fp, $a0, 0x111
    ctx->pc = 0x4e2b1cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)273);
label_4e2b20:
    // 0x4e2b20: 0x309e0113  andi        $fp, $a0, 0x113
    ctx->pc = 0x4e2b20u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)275);
label_4e2b24:
    // 0x4e2b24: 0x309e0108  andi        $fp, $a0, 0x108
    ctx->pc = 0x4e2b24u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)264);
label_4e2b28:
    // 0x4e2b28: 0x309e010d  andi        $fp, $a0, 0x10D
    ctx->pc = 0x4e2b28u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)269);
label_4e2b2c:
    // 0x4e2b2c: 0x0  nop
    ctx->pc = 0x4e2b2cu;
    // NOP
label_4e2b30:
    // 0x4e2b30: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4e2b30u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_4e2b34:
    // 0x4e2b34: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x4e2b34u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_4e2b38:
    // 0x4e2b38: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x4e2b38u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_4e2b3c:
    // 0x4e2b3c: 0x8  jr          $zero
label_4e2b40:
    if (ctx->pc == 0x4E2B40u) {
        ctx->pc = 0x4E2B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2B3Cu;
        // 0x4e2b40: 0xa  movz        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2B44u;
        goto label_4e2b44;
    }
    ctx->pc = 0x4E2B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x4E2B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2B3Cu;
        // 0x4e2b40: 0xa  movz        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E2B3Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4E2B44u;
label_4e2b44:
    // 0x4e2b44: 0xc  syscall     0
    ctx->pc = 0x4e2b44u;
    ctx->pc = 0x4E2B48u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_4e2b48:
    // 0x4e2b48: 0xd  break       0
    ctx->pc = 0x4e2b48u;
    runtime->handleBreak(rdram, ctx);
label_4e2b4c:
    // 0x4e2b4c: 0x0  nop
    ctx->pc = 0x4e2b4cu;
    // NOP
label_4e2b50:
    // 0x4e2b50: 0x0  nop
    ctx->pc = 0x4e2b50u;
    // NOP
label_4e2b54:
    // 0x4e2b54: 0x0  nop
    ctx->pc = 0x4e2b54u;
    // NOP
label_4e2b58:
    // 0x4e2b58: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2b58u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4E2B58 raw=0x00000001");
label_4e2b5c:
    // 0x4e2b5c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2b5cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4E2B5C raw=0x00000001");
label_4e2b60:
    // 0x4e2b60: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4e2b60u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_4e2b64:
    // 0x4e2b64: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4e2b64u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_4e2b68:
    // 0x4e2b68: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x4e2b68u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_4e2b6c:
    // 0x4e2b6c: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x4e2b6cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_4e2b70:
    // 0x4e2b70: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x4e2b70u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_4e2b74:
    // 0x4e2b74: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x4e2b74u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_4e2b78:
    // 0x4e2b78: 0x0  nop
    ctx->pc = 0x4e2b78u;
    // NOP
label_4e2b7c:
    // 0x4e2b7c: 0x0  nop
    ctx->pc = 0x4e2b7cu;
    // NOP
label_4e2b80:
    // 0x4e2b80: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2b80u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4E2B80 raw=0x00000001");
label_4e2b84:
    // 0x4e2b84: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4e2b84u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_4e2b88:
    // 0x4e2b88: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2b88u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4E2B88 raw=0x00000001");
label_4e2b8c:
    // 0x4e2b8c: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4e2b8cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_4e2b90:
    // 0x4e2b90: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2b90u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4E2B90 raw=0x00000001");
label_4e2b94:
    // 0x4e2b94: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4e2b94u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_4e2b98:
    // 0x4e2b98: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2b98u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4E2B98 raw=0x00000001");
label_4e2b9c:
    // 0x4e2b9c: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4e2b9cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_4e2ba0:
    // 0x4e2ba0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2ba0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4E2BA0 raw=0x00000001");
label_4e2ba4:
    // 0x4e2ba4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4e2ba4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_4e2ba8:
    // 0x4e2ba8: 0x74736165  .word       0x74736165                   # INVALID     $v1, $s3, 0x6165 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2ba8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E2BA8 raw=0x74736165");
label_4e2bac:
    // 0x4e2bac: 0x25286277  addiu       $t0, $t1, 0x6277
    ctx->pc = 0x4e2bacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 25207));
label_4e2bb0:
    // 0x4e2bb0: 0x29643230  slti        $a0, $t3, 0x3230
    ctx->pc = 0x4e2bb0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)12848) ? 1 : 0);
label_4e2bb4:
    // 0x4e2bb4: 0x0  nop
    ctx->pc = 0x4e2bb4u;
    // NOP
label_4e2bb8:
    // 0x4e2bb8: 0x0  nop
    ctx->pc = 0x4e2bb8u;
    // NOP
label_4e2bbc:
    // 0x4e2bbc: 0x0  nop
    ctx->pc = 0x4e2bbcu;
    // NOP
label_4e2bc0:
    // 0x4e2bc0: 0x309e271d  andi        $fp, $a0, 0x271D
    ctx->pc = 0x4e2bc0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)10013);
label_4e2bc4:
    // 0x4e2bc4: 0x309e2714  andi        $fp, $a0, 0x2714
    ctx->pc = 0x4e2bc4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)10004);
label_4e2bc8:
    // 0x4e2bc8: 0x309e2712  andi        $fp, $a0, 0x2712
    ctx->pc = 0x4e2bc8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)10002);
label_4e2bcc:
    // 0x4e2bcc: 0x309e271c  andi        $fp, $a0, 0x271C
    ctx->pc = 0x4e2bccu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)10012);
label_4e2bd0:
    // 0x4e2bd0: 0x309e2713  andi        $fp, $a0, 0x2713
    ctx->pc = 0x4e2bd0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)10003);
label_4e2bd4:
    // 0x4e2bd4: 0xaa67011c  swl         $a3, 0x11C($s3)
    ctx->pc = 0x4e2bd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 284); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_4e2bd8:
    // 0x4e2bd8: 0x0  nop
    ctx->pc = 0x4e2bd8u;
    // NOP
label_4e2bdc:
    // 0x4e2bdc: 0x0  nop
    ctx->pc = 0x4e2bdcu;
    // NOP
label_4e2be0:
    // 0x4e2be0: 0x309e274b  andi        $fp, $a0, 0x274B
    ctx->pc = 0x4e2be0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)10059);
label_4e2be4:
    // 0x4e2be4: 0x309e274e  andi        $fp, $a0, 0x274E
    ctx->pc = 0x4e2be4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)10062);
label_4e2be8:
    // 0x4e2be8: 0x309e2749  andi        $fp, $a0, 0x2749
    ctx->pc = 0x4e2be8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)10057);
label_4e2bec:
    // 0x4e2bec: 0x309e274d  andi        $fp, $a0, 0x274D
    ctx->pc = 0x4e2becu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)10061);
label_4e2bf0:
    // 0x4e2bf0: 0x309e274f  andi        $fp, $a0, 0x274F
    ctx->pc = 0x4e2bf0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)10063);
label_4e2bf4:
    // 0x4e2bf4: 0x309e274a  andi        $fp, $a0, 0x274A
    ctx->pc = 0x4e2bf4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)10058);
label_4e2bf8:
    // 0x4e2bf8: 0x0  nop
    ctx->pc = 0x4e2bf8u;
    // NOP
label_4e2bfc:
    // 0x4e2bfc: 0x0  nop
    ctx->pc = 0x4e2bfcu;
    // NOP
label_4e2c00:
    // 0x4e2c00: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4e2c00u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_4e2c04:
    // 0x4e2c04: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2c04u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x4E2C04 raw=0x00000005");
label_4e2c08:
    // 0x4e2c08: 0x8  jr          $zero
label_4e2c0c:
    if (ctx->pc == 0x4E2C0Cu) {
        ctx->pc = 0x4E2C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2C08u;
        // 0x4e2c0c: 0xb  movn        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2C10u;
        goto label_4e2c10;
    }
    ctx->pc = 0x4E2C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x4E2C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2C08u;
        // 0x4e2c0c: 0xb  movn        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E2C08u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4E2C10u;
label_4e2c10:
    // 0x4e2c10: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2c10u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x4E2C10 raw=0x0000000E");
label_4e2c14:
    // 0x4e2c14: 0x0  nop
    ctx->pc = 0x4e2c14u;
    // NOP
label_4e2c18:
    // 0x4e2c18: 0x0  nop
    ctx->pc = 0x4e2c18u;
    // NOP
label_4e2c1c:
    // 0x4e2c1c: 0x0  nop
    ctx->pc = 0x4e2c1cu;
    // NOP
label_4e2c20:
    // 0x4e2c20: 0x0  nop
    ctx->pc = 0x4e2c20u;
    // NOP
label_4e2c24:
    // 0x4e2c24: 0x0  nop
    ctx->pc = 0x4e2c24u;
    // NOP
label_4e2c28:
    // 0x4e2c28: 0x0  nop
    ctx->pc = 0x4e2c28u;
    // NOP
label_4e2c2c:
    // 0x4e2c2c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2c2cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4E2C2C raw=0x00000001");
label_4e2c30:
    // 0x4e2c30: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2c30u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4E2C30 raw=0x00000001");
label_4e2c34:
    // 0x4e2c34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2c34u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4E2C34 raw=0x00000001");
label_4e2c38:
    // 0x4e2c38: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4e2c38u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_4e2c3c:
    // 0x4e2c3c: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4e2c3cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_4e2c40:
    // 0x4e2c40: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x4e2c40u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_4e2c44:
    // 0x4e2c44: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x4e2c44u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_4e2c48:
    // 0x4e2c48: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x4e2c48u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_4e2c4c:
    // 0x4e2c4c: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x4e2c4cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_4e2c50:
    // 0x4e2c50: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x4e2c50u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_4e2c54:
    // 0x4e2c54: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x4e2c54u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_4e2c58:
    // 0x4e2c58: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x4e2c58u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_4e2c5c:
    // 0x4e2c5c: 0x0  nop
    ctx->pc = 0x4e2c5cu;
    // NOP
label_4e2c60:
    // 0x4e2c60: 0x6e61687a  ldr         $at, 0x687A($s3)
    ctx->pc = 0x4e2c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26746); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_4e2c64:
    // 0x4e2c64: 0x6c657267  ldr         $a1, 0x7267($v1)
    ctx->pc = 0x4e2c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4e2c68:
    // 0x4e2c68: 0x303031  tgeu        $at, $s0, 192
    ctx->pc = 0x4e2c68u;
    if (GPR_U64(ctx, 1) >= GPR_U64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
label_4e2c6c:
    // 0x4e2c6c: 0x0  nop
    ctx->pc = 0x4e2c6cu;
    // NOP
label_4e2c70:
    // 0x4e2c70: 0x6f72616a  ldr         $s2, 0x616A($k1)
    ctx->pc = 0x4e2c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24938); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_4e2c74:
    // 0x4e2c74: 0x30303164  andi        $s0, $at, 0x3164
    ctx->pc = 0x4e2c74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12644);
label_4e2c78:
    // 0x4e2c78: 0x63637573  daddi       $v1, $k1, 0x7573
    ctx->pc = 0x4e2c78u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)30067; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_4e2c7c:
    // 0x4e2c7c: 0x0  nop
    ctx->pc = 0x4e2c7cu;
    // NOP
label_4e2c80:
    // 0x4e2c80: 0x64616c67  daddiu      $at, $v1, 0x6C67
    ctx->pc = 0x4e2c80u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27751);
label_4e2c84:
    // 0x4e2c84: 0x73303031  .word       0x73303031                   # pmthl.lw    $t9 # 00103000 <InstrIdType: R5900_MMI_PMTHL>
    ctx->pc = 0x4e2c84u;
    { __m128i val = GPR_VEC(ctx, 25); ctx->lo = _mm_extract_epi32(val, 0); ctx->hi = _mm_extract_epi32(val, 1); }
label_4e2c88:
    // 0x4e2c88: 0x636375  .word       0x00636375                   # INVALID     $v1, $v1, 0x6375 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2c88u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x4E2C88 raw=0x00636375");
label_4e2c8c:
    // 0x4e2c8c: 0x0  nop
    ctx->pc = 0x4e2c8cu;
    // NOP
label_4e2c90:
    // 0x4e2c90: 0x7a617266  lq          $at, 0x7266($s3)
    ctx->pc = 0x4e2c90u;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 19), 29286)));
label_4e2c94:
    // 0x4e2c94: 0x30317265  andi        $s1, $at, 0x7265
    ctx->pc = 0x4e2c94u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)29285);
label_4e2c98:
    // 0x4e2c98: 0x63757330  daddi       $s5, $k1, 0x7330
    ctx->pc = 0x4e2c98u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)29488; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
label_4e2c9c:
    // 0x4e2c9c: 0x63  .word       0x00000063                   # negu        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2c9cu;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_4e2ca0:
    // 0x4e2ca0: 0x646e6173  daddiu      $t6, $v1, 0x6173
    ctx->pc = 0x4e2ca0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)24947);
label_4e2ca4:
    // 0x4e2ca4: 0x78657379  lq          $a1, 0x7379($v1)
    ctx->pc = 0x4e2ca4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 29561)));
label_4e2ca8:
    // 0x4e2ca8: 0x0  nop
    ctx->pc = 0x4e2ca8u;
    // NOP
label_4e2cac:
    // 0x4e2cac: 0x0  nop
    ctx->pc = 0x4e2cacu;
    // NOP
label_4e2cb0:
    // 0x4e2cb0: 0x4e2c60  .word       0x004E2C60                   # add         $a1, $v0, $t6 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2cb0u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_4e2cb4:
    // 0x4e2cb4: 0x4e2c70  tge         $v0, $t6, 177
    ctx->pc = 0x4e2cb4u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_4e2cb8:
    // 0x4e2cb8: 0x4e2c80  .word       0x004E2C80                   # sll         $a1, $t6, 18 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 14), 18));
label_4e2cbc:
    // 0x4e2cbc: 0x4e2c90  .word       0x004E2C90                   # mfhi        $a1 # 004E0480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2cbcu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_4e2cc0:
    // 0x4e2cc0: 0x4e2ca0  .word       0x004E2CA0                   # add         $a1, $v0, $t6 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2cc0u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_4e2cc4:
    // 0x4e2cc4: 0x0  nop
    ctx->pc = 0x4e2cc4u;
    // NOP
label_4e2cc8:
    // 0x4e2cc8: 0x62637365  daddi       $v1, $s3, 0x7365
    ctx->pc = 0x4e2cc8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)29541; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_4e2ccc:
    // 0x4e2ccc: 0x32302528  andi        $s0, $s1, 0x2528
    ctx->pc = 0x4e2cccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9512);
label_4e2cd0:
    // 0x4e2cd0: 0x2964  .word       0x00002964                   # and         $a1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2cd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_4e2cd4:
    // 0x4e2cd4: 0x0  nop
    ctx->pc = 0x4e2cd4u;
    // NOP
label_4e2cd8:
    // 0x4e2cd8: 0x72626572  .word       0x72626572                   # INVALID     $s3, $v0, 0x6572 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e2cd8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x4E2CD8 raw=0x72626572");
label_4e2cdc:
    // 0x4e2cdc: 0x74326c65  .word       0x74326C65                   # INVALID     $at, $s2, 0x6C65 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2cdcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E2CDC raw=0x74326C65");
label_4e2ce0:
    // 0x4e2ce0: 0x6166336f  daddi       $a2, $t3, 0x336F
    ctx->pc = 0x4e2ce0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)13167; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
label_4e2ce4:
    // 0x4e2ce4: 0x6c69  .word       0x00006C69                   # mtsa        $zero # 00006C40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e2ce4u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_4e2ce8:
    // 0x4e2ce8: 0x726d6f67  .word       0x726D6F67                   # INVALID     $s3, $t5, 0x6F67 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e2ce8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x27 at 0x4E2CE8 raw=0x726D6F67");
label_4e2cec:
    // 0x4e2cec: 0x6c756265  ldr         $s5, 0x6265($v1)
    ctx->pc = 0x4e2cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25189); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_4e2cf0:
    // 0x4e2cf0: 0x0  nop
    ctx->pc = 0x4e2cf0u;
    // NOP
label_4e2cf4:
    // 0x4e2cf4: 0x0  nop
    ctx->pc = 0x4e2cf4u;
    // NOP
label_4e2cf8:
    // 0x4e2cf8: 0x72626572  .word       0x72626572                   # INVALID     $s3, $v0, 0x6572 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e2cf8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x4E2CF8 raw=0x72626572");
label_4e2cfc:
    // 0x4e2cfc: 0x74336c65  .word       0x74336C65                   # INVALID     $at, $s3, 0x6C65 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2cfcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E2CFC raw=0x74336C65");
label_4e2d00:
    // 0x4e2d00: 0x6166346f  daddi       $a2, $t3, 0x346F
    ctx->pc = 0x4e2d00u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)13423; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
label_4e2d04:
    // 0x4e2d04: 0x6c69  .word       0x00006C69                   # mtsa        $zero # 00006C40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e2d04u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_4e2d08:
    // 0x4e2d08: 0x72726f6c  .word       0x72726F6C                   # INVALID     $s3, $s2, 0x6F6C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e2d08u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x4E2D08 raw=0x72726F6C");
label_4e2d0c:
    // 0x4e2d0c: 0x6c756265  ldr         $s5, 0x6265($v1)
    ctx->pc = 0x4e2d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25189); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_4e2d10:
    // 0x4e2d10: 0x0  nop
    ctx->pc = 0x4e2d10u;
    // NOP
label_4e2d14:
    // 0x4e2d14: 0x0  nop
    ctx->pc = 0x4e2d14u;
    // NOP
label_4e2d18:
    // 0x4e2d18: 0x0  nop
    ctx->pc = 0x4e2d18u;
    // NOP
label_4e2d1c:
    // 0x4e2d1c: 0x0  nop
    ctx->pc = 0x4e2d1cu;
    // NOP
label_4e2d20:
    // 0x4e2d20: 0x4e2cd8  .word       0x004E2CD8                   # mult        $a1, $v0, $t6 # 000004C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e2d20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_4e2d24:
    // 0x4e2d24: 0x4e2ce8  .word       0x004E2CE8                   # mfsa        $a1 # 004E04C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e2d24u;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_4e2d28:
    // 0x4e2d28: 0x4e2cf8  .word       0x004E2CF8                   # dsll        $a1, $t6, 19 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2d28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 14) << 19);
label_4e2d2c:
    // 0x4e2d2c: 0x4e2d08  .word       0x004E2D08                   # jr          $v0 # 000E2D00 <InstrIdType: CPU_SPECIAL>
label_4e2d30:
    if (ctx->pc == 0x4E2D30u) {
        ctx->pc = 0x4E2D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2D2Cu;
        // 0x4e2d30: 0x6f747574  ldr         $s4, 0x7574($k1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 27), 30068); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2D34u;
        goto label_4e2d34;
    }
    ctx->pc = 0x4E2D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x4E2D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2D2Cu;
        // 0x4e2d30: 0x6f747574  ldr         $s4, 0x7574($k1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 27), 30068); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E2D2Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4E2D34u;
label_4e2d34:
    // 0x4e2d34: 0x65796f76  daddiu      $t9, $t3, 0x6F76
    ctx->pc = 0x4e2d34u;
    SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28534);
label_4e2d38:
    // 0x4e2d38: 0x6b6f7275  ldl         $t7, 0x7275($k1)
    ctx->pc = 0x4e2d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29301); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
label_4e2d3c:
    // 0x4e2d3c: 0x0  nop
    ctx->pc = 0x4e2d3cu;
    // NOP
label_4e2d40:
    // 0x4e2d40: 0x6f747574  ldr         $s4, 0x7574($k1)
    ctx->pc = 0x4e2d40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 30068); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_4e2d44:
    // 0x4e2d44: 0x6f6c6f76  ldr         $t4, 0x6F76($k1)
    ctx->pc = 0x4e2d44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28534); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_4e2d48:
    // 0x4e2d48: 0x6b  .word       0x0000006B                   # sltu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2d48u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_4e2d4c:
    // 0x4e2d4c: 0x0  nop
    ctx->pc = 0x4e2d4cu;
    // NOP
label_4e2d50:
    // 0x4e2d50: 0x73727563  .word       0x73727563                   # INVALID     $k1, $s2, 0x7563 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e2d50u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4E2D50 raw=0x73727563");
label_4e2d54:
    // 0x4e2d54: 0x5f73726f  .word       0x5F73726F                   # bgtzl       $k1, . + 4 + (0x726F << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_4e2d58:
    if (ctx->pc == 0x4E2D58u) {
        ctx->pc = 0x4E2D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2D54u;
        // 0x4e2d58: 0x31  tgeu        $zero, $zero, 0 (Delay Slot)
        if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2D5Cu;
        goto label_4e2d5c;
    }
    ctx->pc = 0x4E2D54u;
    {
        const bool branch_taken_0x4e2d54 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e2d54) {
            ctx->pc = 0x4E2D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2D54u;
            // 0x4e2d58: 0x31  tgeu        $zero, $zero, 0 (Delay Slot)
            if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FF714u;
            return;
        }
    }
    ctx->pc = 0x4E2D5Cu;
label_4e2d5c:
    // 0x4e2d5c: 0x0  nop
    ctx->pc = 0x4e2d5cu;
    // NOP
label_4e2d60:
    // 0x4e2d60: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e2d64:
    if (ctx->pc == 0x4E2D64u) {
        ctx->pc = 0x4E2D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2D60u;
        // 0x4e2d64: 0x6b636162  ldl         $v1, 0x6162($k1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24930); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2D68u;
        goto label_4e2d68;
    }
    ctx->pc = 0x4E2D60u;
    {
        const bool branch_taken_0x4e2d60 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e2d60) {
            ctx->pc = 0x4E2D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2D60u;
            // 0x4e2d64: 0x6b636162  ldl         $v1, 0x6162($k1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24930); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F6DFCu;
            return;
        }
    }
    ctx->pc = 0x4E2D68u;
label_4e2d68:
    // 0x4e2d68: 0x0  nop
    ctx->pc = 0x4e2d68u;
    // NOP
label_4e2d6c:
    // 0x4e2d6c: 0x0  nop
    ctx->pc = 0x4e2d6cu;
    // NOP
label_4e2d70:
    // 0x4e2d70: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e2d74:
    if (ctx->pc == 0x4E2D74u) {
        ctx->pc = 0x4E2D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2D70u;
        // 0x4e2d74: 0x6d6f6f72  ldr         $t7, 0x6F72($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28530); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2D78u;
        goto label_4e2d78;
    }
    ctx->pc = 0x4E2D70u;
    {
        const bool branch_taken_0x4e2d70 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e2d70) {
            ctx->pc = 0x4E2D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2D70u;
            // 0x4e2d74: 0x6d6f6f72  ldr         $t7, 0x6F72($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28530); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F6E0Cu;
            return;
        }
    }
    ctx->pc = 0x4E2D78u;
label_4e2d78:
    // 0x4e2d78: 0x6c697562  ldr         $t1, 0x7562($v1)
    ctx->pc = 0x4e2d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30050); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4e2d7c:
    // 0x4e2d7c: 0x6d726564  ldr         $s2, 0x6564($t3)
    ctx->pc = 0x4e2d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25956); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_4e2d80:
    // 0x4e2d80: 0x65646f  .word       0x0065646F                   # dsubu       $t4, $v1, $a1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2d80u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) - GPR_U64(ctx, 5));
label_4e2d84:
    // 0x4e2d84: 0x0  nop
    ctx->pc = 0x4e2d84u;
    // NOP
label_4e2d88:
    // 0x4e2d88: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e2d8c:
    if (ctx->pc == 0x4E2D8Cu) {
        ctx->pc = 0x4E2D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2D88u;
        // 0x4e2d8c: 0x656c6573  daddiu      $t4, $t3, 0x6573 (Delay Slot)
        SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25971);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2D90u;
        goto label_4e2d90;
    }
    ctx->pc = 0x4E2D88u;
    {
        const bool branch_taken_0x4e2d88 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e2d88) {
            ctx->pc = 0x4E2D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2D88u;
            // 0x4e2d8c: 0x656c6573  daddiu      $t4, $t3, 0x6573 (Delay Slot)
            SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25971);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F6E24u;
            return;
        }
    }
    ctx->pc = 0x4E2D90u;
label_4e2d90:
    // 0x4e2d90: 0x7463  .word       0x00007463                   # negu        $t6, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2d90u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_4e2d94:
    // 0x4e2d94: 0x0  nop
    ctx->pc = 0x4e2d94u;
    // NOP
label_4e2d98:
    // 0x4e2d98: 0x0  nop
    ctx->pc = 0x4e2d98u;
    // NOP
label_4e2d9c:
    // 0x4e2d9c: 0x0  nop
    ctx->pc = 0x4e2d9cu;
    // NOP
label_4e2da0:
    // 0x4e2da0: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e2da4:
    if (ctx->pc == 0x4E2DA4u) {
        ctx->pc = 0x4E2DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2DA0u;
        // 0x4e2da4: 0x6e727566  ldr         $s2, 0x7566($s3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30054); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2DA8u;
        goto label_4e2da8;
    }
    ctx->pc = 0x4E2DA0u;
    {
        const bool branch_taken_0x4e2da0 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e2da0) {
            ctx->pc = 0x4E2DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2DA0u;
            // 0x4e2da4: 0x6e727566  ldr         $s2, 0x7566($s3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30054); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F6E3Cu;
            return;
        }
    }
    ctx->pc = 0x4E2DA8u;
label_4e2da8:
    // 0x4e2da8: 0x72757469  .word       0x72757469                   # INVALID     $s3, $s5, 0x7469 # 00000000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x4e2da8u;
    throw std::runtime_error("Unhandled MMI3 instruction: function 0x11 at 0x4E2DA8 raw=0x72757469");
label_4e2dac:
    // 0x4e2dac: 0x79756265  lq          $s5, 0x6265($t3)
    ctx->pc = 0x4e2dacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 11), 25189)));
label_4e2db0:
    // 0x4e2db0: 0x65646f6d  daddiu      $a0, $t3, 0x6F6D
    ctx->pc = 0x4e2db0u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28525);
label_4e2db4:
    // 0x4e2db4: 0x0  nop
    ctx->pc = 0x4e2db4u;
    // NOP
label_4e2db8:
    // 0x4e2db8: 0x5f424426  .word       0x5F424426                   # bgtzl       $k0, . + 4 + (0x4426 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
label_4e2dbc:
    if (ctx->pc == 0x4E2DBCu) {
        ctx->pc = 0x4E2DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2DB8u;
        // 0x4e2dbc: 0x65646e75  daddiu      $a0, $t3, 0x6E75 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28277);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2DC0u;
        goto label_4e2dc0;
    }
    ctx->pc = 0x4E2DB8u;
    {
        const bool branch_taken_0x4e2db8 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e2db8) {
            ctx->pc = 0x4E2DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2DB8u;
            // 0x4e2dbc: 0x65646e75  daddiu      $a0, $t3, 0x6E75 (Delay Slot)
            SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28277);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F3E54u;
            return;
        }
    }
    ctx->pc = 0x4E2DC0u;
label_4e2dc0:
    // 0x4e2dc0: 0x656e6966  daddiu      $t6, $t3, 0x6966
    ctx->pc = 0x4e2dc0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26982);
label_4e2dc4:
    // 0x4e2dc4: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2dc4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_4e2dc8:
    // 0x4e2dc8: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_4e2dcc:
    if (ctx->pc == 0x4E2DCCu) {
        ctx->pc = 0x4E2DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E2DC8u;
        // 0x4e2dcc: 0x656c6573  daddiu      $t4, $t3, 0x6573 (Delay Slot)
        SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25971);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E2DD0u;
        goto label_4e2dd0;
    }
    ctx->pc = 0x4E2DC8u;
    {
        const bool branch_taken_0x4e2dc8 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e2dc8) {
            ctx->pc = 0x4E2DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2DC8u;
            // 0x4e2dcc: 0x656c6573  daddiu      $t4, $t3, 0x6573 (Delay Slot)
            SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25971);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F6E64u;
            return;
        }
    }
    ctx->pc = 0x4E2DD0u;
label_4e2dd0:
    // 0x4e2dd0: 0x61777463  daddi       $s7, $t3, 0x7463
    ctx->pc = 0x4e2dd0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29795; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, res); }
label_4e2dd4:
    // 0x4e2dd4: 0x6c6c  .word       0x00006C6C                   # dadd        $t5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2dd4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_4e2dd8:
    // 0x4e2dd8: 0x0  nop
    ctx->pc = 0x4e2dd8u;
    // NOP
label_4e2ddc:
    // 0x4e2ddc: 0x0  nop
    ctx->pc = 0x4e2ddcu;
    // NOP
label_4e2de0:
    // 0x4e2de0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e2de0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e2de4:
    // 0x4e2de4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e2de4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e2de8:
    // 0x4e2de8: 0x7469625c  .word       0x7469625C                   # INVALID     $v1, $t1, 0x625C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2de8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E2DE8 raw=0x7469625C");
label_4e2dec:
    // 0x4e2dec: 0x7370616d  .word       0x7370616D                   # INVALID     $k1, $s0, 0x616D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e2decu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4E2DEC raw=0x7370616D");
label_4e2df0:
    // 0x4e2df0: 0x3273705c  andi        $s3, $s3, 0x705C
    ctx->pc = 0x4e2df0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)28764);
label_4e2df4:
    // 0x4e2df4: 0x6475685c  daddiu      $s5, $v1, 0x685C
    ctx->pc = 0x4e2df4u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26716);
label_4e2df8:
    // 0x4e2df8: 0x3273705f  andi        $s3, $s3, 0x705F
    ctx->pc = 0x4e2df8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)28767);
label_4e2dfc:
    // 0x4e2dfc: 0x6478742e  daddiu      $t8, $v1, 0x742E
    ctx->pc = 0x4e2dfcu;
    SET_GPR_S64(ctx, 24, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29742);
label_4e2e00:
    // 0x4e2e00: 0x0  nop
    ctx->pc = 0x4e2e00u;
    // NOP
label_4e2e04:
    // 0x4e2e04: 0x0  nop
    ctx->pc = 0x4e2e04u;
    // NOP
label_4e2e08:
    // 0x4e2e08: 0x0  nop
    ctx->pc = 0x4e2e08u;
    // NOP
label_4e2e0c:
    // 0x4e2e0c: 0x0  nop
    ctx->pc = 0x4e2e0cu;
    // NOP
label_4e2e10:
    // 0x4e2e10: 0x45fa0000  .word       0x45FA0000                   # INVALID     $t7, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e2e10u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xF, function 0x0 at 0x4E2E10 raw=0x45FA0000");
label_4e2e14:
    // 0x4e2e14: 0x45fa0000  .word       0x45FA0000                   # INVALID     $t7, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e2e14u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xF, function 0x0 at 0x4E2E14 raw=0x45FA0000");
label_4e2e18:
    // 0x4e2e18: 0x45fa0000  .word       0x45FA0000                   # INVALID     $t7, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e2e18u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xF, function 0x0 at 0x4E2E18 raw=0x45FA0000");
label_4e2e1c:
    // 0x4e2e1c: 0xc5fa0000  lwc1        $f26, 0x0($t7)
    ctx->pc = 0x4e2e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_4e2e20:
    // 0x4e2e20: 0xc5fa0000  lwc1        $f26, 0x0($t7)
    ctx->pc = 0x4e2e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_4e2e24:
    // 0x4e2e24: 0xc5fa0000  lwc1        $f26, 0x0($t7)
    ctx->pc = 0x4e2e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_4e2e28:
    // 0x4e2e28: 0x61706d69  daddi       $s0, $t3, 0x6D69
    ctx->pc = 0x4e2e28u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28009; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
label_4e2e2c:
    // 0x4e2e2c: 0x34317463  ori         $s1, $at, 0x7463
    ctx->pc = 0x4e2e2cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29795);
label_4e2e30:
    // 0x4e2e30: 0x0  nop
    ctx->pc = 0x4e2e30u;
    // NOP
label_4e2e34:
    // 0x4e2e34: 0x0  nop
    ctx->pc = 0x4e2e34u;
    // NOP
label_4e2e38:
    // 0x4e2e38: 0x0  nop
    ctx->pc = 0x4e2e38u;
    // NOP
label_4e2e3c:
    // 0x4e2e3c: 0x0  nop
    ctx->pc = 0x4e2e3cu;
    // NOP
    ctx->pc = 0x4e2e40u;
}
