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

// Function: sub_00308AD0
// Address: 0x308ad0 - 0x308d78
void sub_00308AD0_0x308ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308AD0_0x308ad0");
#endif

    switch (ctx->pc) {
        case 0x308ad0u: goto label_308ad0;
        case 0x308ad4u: goto label_308ad4;
        case 0x308ad8u: goto label_308ad8;
        case 0x308adcu: goto label_308adc;
        case 0x308ae0u: goto label_308ae0;
        case 0x308ae4u: goto label_308ae4;
        case 0x308ae8u: goto label_308ae8;
        case 0x308aecu: goto label_308aec;
        case 0x308af0u: goto label_308af0;
        case 0x308af4u: goto label_308af4;
        case 0x308af8u: goto label_308af8;
        case 0x308afcu: goto label_308afc;
        case 0x308b00u: goto label_308b00;
        case 0x308b04u: goto label_308b04;
        case 0x308b08u: goto label_308b08;
        case 0x308b0cu: goto label_308b0c;
        case 0x308b10u: goto label_308b10;
        case 0x308b14u: goto label_308b14;
        case 0x308b18u: goto label_308b18;
        case 0x308b1cu: goto label_308b1c;
        case 0x308b20u: goto label_308b20;
        case 0x308b24u: goto label_308b24;
        case 0x308b28u: goto label_308b28;
        case 0x308b2cu: goto label_308b2c;
        case 0x308b30u: goto label_308b30;
        case 0x308b34u: goto label_308b34;
        case 0x308b38u: goto label_308b38;
        case 0x308b3cu: goto label_308b3c;
        case 0x308b40u: goto label_308b40;
        case 0x308b44u: goto label_308b44;
        case 0x308b48u: goto label_308b48;
        case 0x308b4cu: goto label_308b4c;
        case 0x308b50u: goto label_308b50;
        case 0x308b54u: goto label_308b54;
        case 0x308b58u: goto label_308b58;
        case 0x308b5cu: goto label_308b5c;
        case 0x308b60u: goto label_308b60;
        case 0x308b64u: goto label_308b64;
        case 0x308b68u: goto label_308b68;
        case 0x308b6cu: goto label_308b6c;
        case 0x308b70u: goto label_308b70;
        case 0x308b74u: goto label_308b74;
        case 0x308b78u: goto label_308b78;
        case 0x308b7cu: goto label_308b7c;
        case 0x308b80u: goto label_308b80;
        case 0x308b84u: goto label_308b84;
        case 0x308b88u: goto label_308b88;
        case 0x308b8cu: goto label_308b8c;
        case 0x308b90u: goto label_308b90;
        case 0x308b94u: goto label_308b94;
        case 0x308b98u: goto label_308b98;
        case 0x308b9cu: goto label_308b9c;
        case 0x308ba0u: goto label_308ba0;
        case 0x308ba4u: goto label_308ba4;
        case 0x308ba8u: goto label_308ba8;
        case 0x308bacu: goto label_308bac;
        case 0x308bb0u: goto label_308bb0;
        case 0x308bb4u: goto label_308bb4;
        case 0x308bb8u: goto label_308bb8;
        case 0x308bbcu: goto label_308bbc;
        case 0x308bc0u: goto label_308bc0;
        case 0x308bc4u: goto label_308bc4;
        case 0x308bc8u: goto label_308bc8;
        case 0x308bccu: goto label_308bcc;
        case 0x308bd0u: goto label_308bd0;
        case 0x308bd4u: goto label_308bd4;
        case 0x308bd8u: goto label_308bd8;
        case 0x308bdcu: goto label_308bdc;
        case 0x308be0u: goto label_308be0;
        case 0x308be4u: goto label_308be4;
        case 0x308be8u: goto label_308be8;
        case 0x308becu: goto label_308bec;
        case 0x308bf0u: goto label_308bf0;
        case 0x308bf4u: goto label_308bf4;
        case 0x308bf8u: goto label_308bf8;
        case 0x308bfcu: goto label_308bfc;
        case 0x308c00u: goto label_308c00;
        case 0x308c04u: goto label_308c04;
        case 0x308c08u: goto label_308c08;
        case 0x308c0cu: goto label_308c0c;
        case 0x308c10u: goto label_308c10;
        case 0x308c14u: goto label_308c14;
        case 0x308c18u: goto label_308c18;
        case 0x308c1cu: goto label_308c1c;
        case 0x308c20u: goto label_308c20;
        case 0x308c24u: goto label_308c24;
        case 0x308c28u: goto label_308c28;
        case 0x308c2cu: goto label_308c2c;
        case 0x308c30u: goto label_308c30;
        case 0x308c34u: goto label_308c34;
        case 0x308c38u: goto label_308c38;
        case 0x308c3cu: goto label_308c3c;
        case 0x308c40u: goto label_308c40;
        case 0x308c44u: goto label_308c44;
        case 0x308c48u: goto label_308c48;
        case 0x308c4cu: goto label_308c4c;
        case 0x308c50u: goto label_308c50;
        case 0x308c54u: goto label_308c54;
        case 0x308c58u: goto label_308c58;
        case 0x308c5cu: goto label_308c5c;
        case 0x308c60u: goto label_308c60;
        case 0x308c64u: goto label_308c64;
        case 0x308c68u: goto label_308c68;
        case 0x308c6cu: goto label_308c6c;
        case 0x308c70u: goto label_308c70;
        case 0x308c74u: goto label_308c74;
        case 0x308c78u: goto label_308c78;
        case 0x308c7cu: goto label_308c7c;
        case 0x308c80u: goto label_308c80;
        case 0x308c84u: goto label_308c84;
        case 0x308c88u: goto label_308c88;
        case 0x308c8cu: goto label_308c8c;
        case 0x308c90u: goto label_308c90;
        case 0x308c94u: goto label_308c94;
        case 0x308c98u: goto label_308c98;
        case 0x308c9cu: goto label_308c9c;
        case 0x308ca0u: goto label_308ca0;
        case 0x308ca4u: goto label_308ca4;
        case 0x308ca8u: goto label_308ca8;
        case 0x308cacu: goto label_308cac;
        case 0x308cb0u: goto label_308cb0;
        case 0x308cb4u: goto label_308cb4;
        case 0x308cb8u: goto label_308cb8;
        case 0x308cbcu: goto label_308cbc;
        case 0x308cc0u: goto label_308cc0;
        case 0x308cc4u: goto label_308cc4;
        case 0x308cc8u: goto label_308cc8;
        case 0x308cccu: goto label_308ccc;
        case 0x308cd0u: goto label_308cd0;
        case 0x308cd4u: goto label_308cd4;
        case 0x308cd8u: goto label_308cd8;
        case 0x308cdcu: goto label_308cdc;
        case 0x308ce0u: goto label_308ce0;
        case 0x308ce4u: goto label_308ce4;
        case 0x308ce8u: goto label_308ce8;
        case 0x308cecu: goto label_308cec;
        case 0x308cf0u: goto label_308cf0;
        case 0x308cf4u: goto label_308cf4;
        case 0x308cf8u: goto label_308cf8;
        case 0x308cfcu: goto label_308cfc;
        case 0x308d00u: goto label_308d00;
        case 0x308d04u: goto label_308d04;
        case 0x308d08u: goto label_308d08;
        case 0x308d0cu: goto label_308d0c;
        case 0x308d10u: goto label_308d10;
        case 0x308d14u: goto label_308d14;
        case 0x308d18u: goto label_308d18;
        case 0x308d1cu: goto label_308d1c;
        case 0x308d20u: goto label_308d20;
        case 0x308d24u: goto label_308d24;
        case 0x308d28u: goto label_308d28;
        case 0x308d2cu: goto label_308d2c;
        case 0x308d30u: goto label_308d30;
        case 0x308d34u: goto label_308d34;
        case 0x308d38u: goto label_308d38;
        case 0x308d3cu: goto label_308d3c;
        case 0x308d40u: goto label_308d40;
        case 0x308d44u: goto label_308d44;
        case 0x308d48u: goto label_308d48;
        case 0x308d4cu: goto label_308d4c;
        case 0x308d50u: goto label_308d50;
        case 0x308d54u: goto label_308d54;
        case 0x308d58u: goto label_308d58;
        case 0x308d5cu: goto label_308d5c;
        case 0x308d60u: goto label_308d60;
        case 0x308d64u: goto label_308d64;
        case 0x308d68u: goto label_308d68;
        case 0x308d6cu: goto label_308d6c;
        case 0x308d70u: goto label_308d70;
        case 0x308d74u: goto label_308d74;
        default: break;
    }

    ctx->pc = 0x308ad0u;

label_308ad0:
    // 0x308ad0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x308ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_308ad4:
    // 0x308ad4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x308ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_308ad8:
    // 0x308ad8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x308ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_308adc:
    // 0x308adc: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x308adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
label_308ae0:
    // 0x308ae0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x308ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_308ae4:
    // 0x308ae4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x308ae4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_308ae8:
    // 0x308ae8: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x308ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_308aec:
    // 0x308aec: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x308aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_308af0:
    // 0x308af0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x308af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_308af4:
    // 0x308af4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x308af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_308af8:
    // 0x308af8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x308af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_308afc:
    // 0x308afc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x308afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_308b00:
    // 0x308b00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x308b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_308b04:
    // 0x308b04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x308b04u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10001010
label_308b08:
    // 0x308b08: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x308b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_308b0c:
    // 0x308b0c: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
label_308b10:
    if (ctx->pc == 0x308B10u) {
        ctx->pc = 0x308B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B0Cu;
        // 0x308b10: 0x3c15004f  lui         $s5, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308B14u;
        goto label_308b14;
    }
    ctx->pc = 0x308B0Cu;
    {
        const bool branch_taken_0x308b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B0Cu;
        // 0x308b10: 0x3c15004f  lui         $s5, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308b0c) {
            ctx->pc = 0x308C80u;
            goto label_308c80;
        }
    }
    ctx->pc = 0x308B14u;
label_308b14:
    // 0x308b14: 0x26a22228  addiu       $v0, $s5, 0x2228
    ctx->pc = 0x308b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 8744));
label_308b18:
    // 0x308b18: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x308b18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_308b1c:
    // 0x308b1c: 0x12000058  beqz        $s0, . + 4 + (0x58 << 2)
label_308b20:
    if (ctx->pc == 0x308B20u) {
        ctx->pc = 0x308B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B1Cu;
        // 0x308b20: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308B24u;
        goto label_308b24;
    }
    ctx->pc = 0x308B1Cu;
    {
        const bool branch_taken_0x308b1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x308B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B1Cu;
        // 0x308b20: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308b1c) {
            ctx->pc = 0x308C80u;
            goto label_308c80;
        }
    }
    ctx->pc = 0x308B24u;
label_308b24:
    // 0x308b24: 0x24173999  addiu       $s7, $zero, 0x3999
    ctx->pc = 0x308b24u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 14745));
label_308b28:
    // 0x308b28: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x308b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_308b2c:
    // 0x308b2c: 0x0  nop
    ctx->pc = 0x308b2cu;
    // NOP
label_308b30:
    // 0x308b30: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x308b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_308b34:
    // 0x308b34: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x308b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_308b38:
    // 0x308b38: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x308b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
label_308b3c:
    // 0x308b3c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x308b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10001000
label_308b40:
    // 0x308b40: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x308b40u;
    SET_GPR_S32(ctx, 17, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10001010
label_308b44:
    // 0x308b44: 0xde040020  ld          $a0, 0x20($s0)
    ctx->pc = 0x308b44u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_308b48:
    // 0x308b48: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x308b48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_308b4c:
    // 0x308b4c: 0x32250800  andi        $a1, $s1, 0x800
    ctx->pc = 0x308b4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2048);
label_308b50:
    // 0x308b50: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x308b50u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_308b54:
    // 0x308b54: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x308b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_308b58:
    // 0x308b58: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_308b5c:
    if (ctx->pc == 0x308B5Cu) {
        ctx->pc = 0x308B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B58u;
        // 0x308b5c: 0x83982f  dsubu       $s3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308B60u;
        goto label_308b60;
    }
    ctx->pc = 0x308B58u;
    {
        const bool branch_taken_0x308b58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x308B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B58u;
        // 0x308b5c: 0x83982f  dsubu       $s3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308b58) {
            ctx->pc = 0x308B84u;
            goto label_308b84;
        }
    }
    ctx->pc = 0x308B60u;
label_308b60:
    // 0x308b60: 0xde822228  ld          $v0, 0x2228($s4)
    ctx->pc = 0x308b60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 8744)));
label_308b64:
    // 0x308b64: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x308b64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_308b68:
    // 0x308b68: 0x3484fbff  ori         $a0, $a0, 0xFBFF
    ctx->pc = 0x308b68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64511);
label_308b6c:
    // 0x308b6c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x308b6cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_308b70:
    // 0x308b70: 0x2242024  and         $a0, $s1, $a0
    ctx->pc = 0x308b70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
label_308b74:
    // 0x308b74: 0xc0c2144  jal         func_308510
label_308b78:
    if (ctx->pc == 0x308B78u) {
        ctx->pc = 0x308B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B74u;
        // 0x308b78: 0xfe822228  sd          $v0, 0x2228($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 8744), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308B7Cu;
        goto label_308b7c;
    }
    ctx->pc = 0x308B74u;
    SET_GPR_U32(ctx, 31, 0x308B7Cu);
    ctx->pc = 0x308B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308B74u;
    // 0x308b78: 0xfe822228  sd          $v0, 0x2228($s4) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 20), 8744), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308510u, 0x308B74u, 0x308B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308B7Cu;
label_308b7c:
    // 0x308b7c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x308b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_308b80:
    // 0x308b80: 0x8cc61000  lw          $a2, 0x1000($a2)
    ctx->pc = 0x308b80u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 4096))); // MMIO: 0x10001000
label_308b84:
    // 0x308b84: 0xde842228  ld          $a0, 0x2228($s4)
    ctx->pc = 0x308b84u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 8744)));
label_308b88:
    // 0x308b88: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x308b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_308b8c:
    // 0x308b8c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x308b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_308b90:
    // 0x308b90: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x308b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_308b94:
    // 0x308b94: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x308b94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_308b98:
    // 0x308b98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x308b98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_308b9c:
    // 0x308b9c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x308b9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_308ba0:
    // 0x308ba0: 0x648814  dsllv       $s1, $a0, $v1
    ctx->pc = 0x308ba0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
label_308ba4:
    // 0x308ba4: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x308ba4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_308ba8:
    // 0x308ba8: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
label_308bac:
    if (ctx->pc == 0x308BACu) {
        ctx->pc = 0x308BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308BA8u;
        // 0x308bac: 0x26922228  addiu       $s2, $s4, 0x2228 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 8744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308BB0u;
        goto label_308bb0;
    }
    ctx->pc = 0x308BA8u;
    {
        const bool branch_taken_0x308ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308BA8u;
        // 0x308bac: 0x26922228  addiu       $s2, $s4, 0x2228 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 8744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308ba8) {
            ctx->pc = 0x308C80u;
            goto label_308c80;
        }
    }
    ctx->pc = 0x308BB0u;
label_308bb0:
    // 0x308bb0: 0xc0c22a6  jal         func_308A98
label_308bb4:
    if (ctx->pc == 0x308BB4u) {
        ctx->pc = 0x308BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308BB0u;
        // 0x308bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308BB8u;
        goto label_308bb8;
    }
    ctx->pc = 0x308BB0u;
    SET_GPR_U32(ctx, 31, 0x308BB8u);
    ctx->pc = 0x308BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308BB0u;
    // 0x308bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308A98u, 0x308BB0u, 0x308BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308BB8u;
label_308bb8:
    // 0x308bb8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x308bb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308bbc:
    // 0x308bbc: 0xde060018  ld          $a2, 0x18($s0)
    ctx->pc = 0x308bbcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_308bc0:
    // 0x308bc0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x308bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_308bc4:
    // 0x308bc4: 0x103900  sll         $a3, $s0, 4
    ctx->pc = 0x308bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_308bc8:
    // 0x308bc8: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x308bc8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_308bcc:
    // 0x308bcc: 0x226302d  daddu       $a2, $s1, $a2
    ctx->pc = 0x308bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 6));
label_308bd0:
    // 0x308bd0: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x308bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_308bd4:
    // 0x308bd4: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x308bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_308bd8:
    // 0x308bd8: 0xc3302f  dsubu       $a2, $a2, $v1
    ctx->pc = 0x308bd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 3));
label_308bdc:
    // 0x308bdc: 0x8e1c002c  lw          $gp, 0x2C($s0)
    ctx->pc = 0x308bdcu;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_308be0:
    // 0x308be0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x308be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_308be4:
    // 0x308be4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x308be4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_308be8:
    // 0x308be8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x308be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_308bec:
    // 0x308bec: 0xe42025  or          $a0, $a3, $a0
    ctx->pc = 0x308becu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_308bf0:
    // 0x308bf0: 0xde050020  ld          $a1, 0x20($s0)
    ctx->pc = 0x308bf0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_308bf4:
    // 0x308bf4: 0x40f809  jalr        $v0
label_308bf8:
    if (ctx->pc == 0x308BF8u) {
        ctx->pc = 0x308BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308BF4u;
        // 0x308bf8: 0x8e070030  lw          $a3, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308BFCu;
        goto label_308bfc;
    }
    ctx->pc = 0x308BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308BFCu);
        ctx->pc = 0x308BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308BF4u;
        // 0x308bf8: 0x8e070030  lw          $a3, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308BF4u, 0x308BFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308BFCu;
label_308bfc:
    // 0x308bfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x308bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308c00:
    // 0x308c00: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_308c04:
    if (ctx->pc == 0x308C04u) {
        ctx->pc = 0x308C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C00u;
        // 0x308c04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C08u;
        goto label_308c08;
    }
    ctx->pc = 0x308C00u;
    {
        const bool branch_taken_0x308c00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x308C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C00u;
        // 0x308c04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308c00) {
            ctx->pc = 0x308C20u;
            goto label_308c20;
        }
    }
    ctx->pc = 0x308C08u;
label_308c08:
    // 0x308c08: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x308c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_308c0c:
    // 0x308c0c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x308c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_308c10:
    // 0x308c10: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x308c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_308c14:
    // 0x308c14: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x308c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_308c18:
    // 0x308c18: 0x10000014  b           . + 4 + (0x14 << 2)
label_308c1c:
    if (ctx->pc == 0x308C1Cu) {
        ctx->pc = 0x308C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C18u;
        // 0x308c1c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C20u;
        goto label_308c20;
    }
    ctx->pc = 0x308C18u;
    {
        const bool branch_taken_0x308c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C18u;
        // 0x308c1c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308c18) {
            ctx->pc = 0x308C6Cu;
            goto label_308c6c;
        }
    }
    ctx->pc = 0x308C20u;
label_308c20:
    // 0x308c20: 0x14a2000b  bne         $a1, $v0, . + 4 + (0xB << 2)
label_308c24:
    if (ctx->pc == 0x308C24u) {
        ctx->pc = 0x308C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C20u;
        // 0x308c24: 0x24023998  addiu       $v0, $zero, 0x3998 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C28u;
        goto label_308c28;
    }
    ctx->pc = 0x308C20u;
    {
        const bool branch_taken_0x308c20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x308C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C20u;
        // 0x308c24: 0x24023998  addiu       $v0, $zero, 0x3998 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308c20) {
            ctx->pc = 0x308C50u;
            goto label_308c50;
        }
    }
    ctx->pc = 0x308C28u;
label_308c28:
    // 0x308c28: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x308c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_308c2c:
    // 0x308c2c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x308c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_308c30:
    // 0x308c30: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x308c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_308c34:
    // 0x308c34: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x308c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_308c38:
    // 0x308c38: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x308c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_308c3c:
    // 0x308c3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x308c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_308c40:
    // 0x308c40: 0xae500014  sw          $s0, 0x14($s2)
    ctx->pc = 0x308c40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
label_308c44:
    // 0x308c44: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x308c44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_308c48:
    // 0x308c48: 0x10000009  b           . + 4 + (0x9 << 2)
label_308c4c:
    if (ctx->pc == 0x308C4Cu) {
        ctx->pc = 0x308C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C48u;
        // 0x308c4c: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C50u;
        goto label_308c50;
    }
    ctx->pc = 0x308C48u;
    {
        const bool branch_taken_0x308c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C48u;
        // 0x308c4c: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308c48) {
            ctx->pc = 0x308C70u;
            goto label_308c70;
        }
    }
    ctx->pc = 0x308C50u;
label_308c50:
    // 0x308c50: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x308c50u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_308c54:
    // 0x308c54: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x308c54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_308c58:
    // 0x308c58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x308c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_308c5c:
    // 0x308c5c: 0x2e2280a  movz        $a1, $s7, $v0
    ctx->pc = 0x308c5cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 23));
label_308c60:
    // 0x308c60: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x308c60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
label_308c64:
    // 0x308c64: 0xc0c2284  jal         func_308A10
label_308c68:
    if (ctx->pc == 0x308C68u) {
        ctx->pc = 0x308C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C64u;
        // 0x308c68: 0xfe030020  sd          $v1, 0x20($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C6Cu;
        goto label_308c6c;
    }
    ctx->pc = 0x308C64u;
    SET_GPR_U32(ctx, 31, 0x308C6Cu);
    ctx->pc = 0x308C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308C64u;
    // 0x308c68: 0xfe030020  sd          $v1, 0x20($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308A10u, 0x308C64u, 0x308C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308C6Cu;
label_308c6c:
    // 0x308c6c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x308c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_308c70:
    // 0x308c70: 0x1600ffaf  bnez        $s0, . + 4 + (-0x51 << 2)
label_308c74:
    if (ctx->pc == 0x308C74u) {
        ctx->pc = 0x308C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C70u;
        // 0x308c74: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C78u;
        goto label_308c78;
    }
    ctx->pc = 0x308C70u;
    {
        const bool branch_taken_0x308c70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x308C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C70u;
        // 0x308c74: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308c70) {
            ctx->pc = 0x308B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308b30;
        }
    }
    ctx->pc = 0x308C78u;
label_308c78:
    // 0x308c78: 0x10000002  b           . + 4 + (0x2 << 2)
label_308c7c:
    if (ctx->pc == 0x308C7Cu) {
        ctx->pc = 0x308C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C78u;
        // 0x308c7c: 0x26a42228  addiu       $a0, $s5, 0x2228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 8744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C80u;
        goto label_308c80;
    }
    ctx->pc = 0x308C78u;
    {
        const bool branch_taken_0x308c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C78u;
        // 0x308c7c: 0x26a42228  addiu       $a0, $s5, 0x2228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 8744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308c78) {
            ctx->pc = 0x308C84u;
            goto label_308c84;
        }
    }
    ctx->pc = 0x308C80u;
label_308c80:
    // 0x308c80: 0x26a42228  addiu       $a0, $s5, 0x2228
    ctx->pc = 0x308c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 8744));
label_308c84:
    // 0x308c84: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x308c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_308c88:
    // 0x308c88: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x308c88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
label_308c8c:
    // 0x308c8c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x308c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_308c90:
    // 0x308c90: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x308c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_308c94:
    // 0x308c94: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x308c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_308c98:
    // 0x308c98: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x308c98u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10001000
label_308c9c:
    // 0x308c9c: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x308c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
label_308ca0:
    // 0x308ca0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x308ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10001010
label_308ca4:
    // 0x308ca4: 0x32020800  andi        $v0, $s0, 0x800
    ctx->pc = 0x308ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2048);
label_308ca8:
    // 0x308ca8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_308cac:
    if (ctx->pc == 0x308CACu) {
        ctx->pc = 0x308CB0u;
        goto label_308cb0;
    }
    ctx->pc = 0x308CA8u;
    {
        const bool branch_taken_0x308ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308ca8) {
            ctx->pc = 0x308CD4u;
            goto label_308cd4;
        }
    }
    ctx->pc = 0x308CB0u;
label_308cb0:
    // 0x308cb0: 0xdea22228  ld          $v0, 0x2228($s5)
    ctx->pc = 0x308cb0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 8744)));
label_308cb4:
    // 0x308cb4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x308cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_308cb8:
    // 0x308cb8: 0x3484fbff  ori         $a0, $a0, 0xFBFF
    ctx->pc = 0x308cb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64511);
label_308cbc:
    // 0x308cbc: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x308cbcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_308cc0:
    // 0x308cc0: 0x2042024  and         $a0, $s0, $a0
    ctx->pc = 0x308cc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
label_308cc4:
    // 0x308cc4: 0xc0c2144  jal         func_308510
label_308cc8:
    if (ctx->pc == 0x308CC8u) {
        ctx->pc = 0x308CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CC4u;
        // 0x308cc8: 0xfea22228  sd          $v0, 0x2228($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 8744), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308CCCu;
        goto label_308ccc;
    }
    ctx->pc = 0x308CC4u;
    SET_GPR_U32(ctx, 31, 0x308CCCu);
    ctx->pc = 0x308CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308CC4u;
    // 0x308cc8: 0xfea22228  sd          $v0, 0x2228($s5) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 21), 8744), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308510u, 0x308CC4u, 0x308CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308CCCu;
label_308ccc:
    // 0x308ccc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x308cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_308cd0:
    // 0x308cd0: 0x8c841000  lw          $a0, 0x1000($a0)
    ctx->pc = 0x308cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 4096))); // MMIO: 0x10001000
label_308cd4:
    // 0x308cd4: 0xdea22228  ld          $v0, 0x2228($s5)
    ctx->pc = 0x308cd4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 8744)));
label_308cd8:
    // 0x308cd8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x308cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_308cdc:
    // 0x308cdc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x308cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_308ce0:
    // 0x308ce0: 0x32040003  andi        $a0, $s0, 0x3
    ctx->pc = 0x308ce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
label_308ce4:
    // 0x308ce4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x308ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_308ce8:
    // 0x308ce8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x308ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_308cec:
    // 0x308cec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x308cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_308cf0:
    // 0x308cf0: 0xc0c2220  jal         func_308880
label_308cf4:
    if (ctx->pc == 0x308CF4u) {
        ctx->pc = 0x308CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CF0u;
        // 0x308cf4: 0x822014  dsllv       $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308CF8u;
        goto label_308cf8;
    }
    ctx->pc = 0x308CF0u;
    SET_GPR_U32(ctx, 31, 0x308CF8u);
    ctx->pc = 0x308CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308CF0u;
    // 0x308cf4: 0x822014  dsllv       $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308880u, 0x308CF0u, 0x308CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308CF8u;
label_308cf8:
    // 0x308cf8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x308cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_308cfc:
    // 0x308cfc: 0x8c421000  lw          $v0, 0x1000($v0)
    ctx->pc = 0x308cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4096))); // MMIO: 0x10001000
label_308d00:
    // 0x308d00: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x308d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_308d04:
    // 0x308d04: 0x8c631010  lw          $v1, 0x1010($v1)
    ctx->pc = 0x308d04u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4112))); // MMIO: 0x10001010
label_308d08:
    // 0x308d08: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x308d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_308d0c:
    // 0x308d0c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_308d10:
    if (ctx->pc == 0x308D10u) {
        ctx->pc = 0x308D14u;
        goto label_308d14;
    }
    ctx->pc = 0x308D0Cu;
    {
        const bool branch_taken_0x308d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308d0c) {
            ctx->pc = 0x308D38u;
            goto label_308d38;
        }
    }
    ctx->pc = 0x308D14u;
label_308d14:
    // 0x308d14: 0xdea22228  ld          $v0, 0x2228($s5)
    ctx->pc = 0x308d14u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 8744)));
label_308d18:
    // 0x308d18: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x308d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_308d1c:
    // 0x308d1c: 0x3484fbff  ori         $a0, $a0, 0xFBFF
    ctx->pc = 0x308d1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64511);
label_308d20:
    // 0x308d20: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x308d20u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_308d24:
    // 0x308d24: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x308d24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_308d28:
    // 0x308d28: 0xc0c2144  jal         func_308510
label_308d2c:
    if (ctx->pc == 0x308D2Cu) {
        ctx->pc = 0x308D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D28u;
        // 0x308d2c: 0xfea22228  sd          $v0, 0x2228($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 8744), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308D30u;
        goto label_308d30;
    }
    ctx->pc = 0x308D28u;
    SET_GPR_U32(ctx, 31, 0x308D30u);
    ctx->pc = 0x308D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308D28u;
    // 0x308d2c: 0xfea22228  sd          $v0, 0x2228($s5) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 21), 8744), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308510u, 0x308D28u, 0x308D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308D30u;
label_308d30:
    // 0x308d30: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x308d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_308d34:
    // 0x308d34: 0x8c421000  lw          $v0, 0x1000($v0)
    ctx->pc = 0x308d34u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4096))); // MMIO: 0x10001000
label_308d38:
    // 0x308d38: 0xdea22228  ld          $v0, 0x2228($s5)
    ctx->pc = 0x308d38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 8744)));
label_308d3c:
    // 0x308d3c: 0xf  sync
    ctx->pc = 0x308d3cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_308d40:
    // 0x308d40: 0x42000038  ei
    ctx->pc = 0x308d40u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_308d44:
    // 0x308d44: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x308d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_308d48:
    // 0x308d48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x308d48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_308d4c:
    // 0x308d4c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x308d4cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_308d50:
    // 0x308d50: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x308d50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_308d54:
    // 0x308d54: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x308d54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_308d58:
    // 0x308d58: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x308d58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_308d5c:
    // 0x308d5c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x308d5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_308d60:
    // 0x308d60: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x308d60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_308d64:
    // 0x308d64: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x308d64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_308d68:
    // 0x308d68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x308d68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_308d6c:
    // 0x308d6c: 0x3e00008  jr          $ra
label_308d70:
    if (ctx->pc == 0x308D70u) {
        ctx->pc = 0x308D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D6Cu;
        // 0x308d70: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308D74u;
        goto label_308d74;
    }
    ctx->pc = 0x308D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D6Cu;
        // 0x308d70: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308D74u;
label_308d74:
    // 0x308d74: 0x0  nop
    ctx->pc = 0x308d74u;
    // NOP
    ctx->pc = 0x308d78u;
}
