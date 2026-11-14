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

// Function: sub_0038FCF0
// Address: 0x38fcf0 - 0x38ff68
void sub_0038FCF0_0x38fcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038FCF0_0x38fcf0");
#endif

    switch (ctx->pc) {
        case 0x38fcf0u: goto label_38fcf0;
        case 0x38fcf4u: goto label_38fcf4;
        case 0x38fcf8u: goto label_38fcf8;
        case 0x38fcfcu: goto label_38fcfc;
        case 0x38fd00u: goto label_38fd00;
        case 0x38fd04u: goto label_38fd04;
        case 0x38fd08u: goto label_38fd08;
        case 0x38fd0cu: goto label_38fd0c;
        case 0x38fd10u: goto label_38fd10;
        case 0x38fd14u: goto label_38fd14;
        case 0x38fd18u: goto label_38fd18;
        case 0x38fd1cu: goto label_38fd1c;
        case 0x38fd20u: goto label_38fd20;
        case 0x38fd24u: goto label_38fd24;
        case 0x38fd28u: goto label_38fd28;
        case 0x38fd2cu: goto label_38fd2c;
        case 0x38fd30u: goto label_38fd30;
        case 0x38fd34u: goto label_38fd34;
        case 0x38fd38u: goto label_38fd38;
        case 0x38fd3cu: goto label_38fd3c;
        case 0x38fd40u: goto label_38fd40;
        case 0x38fd44u: goto label_38fd44;
        case 0x38fd48u: goto label_38fd48;
        case 0x38fd4cu: goto label_38fd4c;
        case 0x38fd50u: goto label_38fd50;
        case 0x38fd54u: goto label_38fd54;
        case 0x38fd58u: goto label_38fd58;
        case 0x38fd5cu: goto label_38fd5c;
        case 0x38fd60u: goto label_38fd60;
        case 0x38fd64u: goto label_38fd64;
        case 0x38fd68u: goto label_38fd68;
        case 0x38fd6cu: goto label_38fd6c;
        case 0x38fd70u: goto label_38fd70;
        case 0x38fd74u: goto label_38fd74;
        case 0x38fd78u: goto label_38fd78;
        case 0x38fd7cu: goto label_38fd7c;
        case 0x38fd80u: goto label_38fd80;
        case 0x38fd84u: goto label_38fd84;
        case 0x38fd88u: goto label_38fd88;
        case 0x38fd8cu: goto label_38fd8c;
        case 0x38fd90u: goto label_38fd90;
        case 0x38fd94u: goto label_38fd94;
        case 0x38fd98u: goto label_38fd98;
        case 0x38fd9cu: goto label_38fd9c;
        case 0x38fda0u: goto label_38fda0;
        case 0x38fda4u: goto label_38fda4;
        case 0x38fda8u: goto label_38fda8;
        case 0x38fdacu: goto label_38fdac;
        case 0x38fdb0u: goto label_38fdb0;
        case 0x38fdb4u: goto label_38fdb4;
        case 0x38fdb8u: goto label_38fdb8;
        case 0x38fdbcu: goto label_38fdbc;
        case 0x38fdc0u: goto label_38fdc0;
        case 0x38fdc4u: goto label_38fdc4;
        case 0x38fdc8u: goto label_38fdc8;
        case 0x38fdccu: goto label_38fdcc;
        case 0x38fdd0u: goto label_38fdd0;
        case 0x38fdd4u: goto label_38fdd4;
        case 0x38fdd8u: goto label_38fdd8;
        case 0x38fddcu: goto label_38fddc;
        case 0x38fde0u: goto label_38fde0;
        case 0x38fde4u: goto label_38fde4;
        case 0x38fde8u: goto label_38fde8;
        case 0x38fdecu: goto label_38fdec;
        case 0x38fdf0u: goto label_38fdf0;
        case 0x38fdf4u: goto label_38fdf4;
        case 0x38fdf8u: goto label_38fdf8;
        case 0x38fdfcu: goto label_38fdfc;
        case 0x38fe00u: goto label_38fe00;
        case 0x38fe04u: goto label_38fe04;
        case 0x38fe08u: goto label_38fe08;
        case 0x38fe0cu: goto label_38fe0c;
        case 0x38fe10u: goto label_38fe10;
        case 0x38fe14u: goto label_38fe14;
        case 0x38fe18u: goto label_38fe18;
        case 0x38fe1cu: goto label_38fe1c;
        case 0x38fe20u: goto label_38fe20;
        case 0x38fe24u: goto label_38fe24;
        case 0x38fe28u: goto label_38fe28;
        case 0x38fe2cu: goto label_38fe2c;
        case 0x38fe30u: goto label_38fe30;
        case 0x38fe34u: goto label_38fe34;
        case 0x38fe38u: goto label_38fe38;
        case 0x38fe3cu: goto label_38fe3c;
        case 0x38fe40u: goto label_38fe40;
        case 0x38fe44u: goto label_38fe44;
        case 0x38fe48u: goto label_38fe48;
        case 0x38fe4cu: goto label_38fe4c;
        case 0x38fe50u: goto label_38fe50;
        case 0x38fe54u: goto label_38fe54;
        case 0x38fe58u: goto label_38fe58;
        case 0x38fe5cu: goto label_38fe5c;
        case 0x38fe60u: goto label_38fe60;
        case 0x38fe64u: goto label_38fe64;
        case 0x38fe68u: goto label_38fe68;
        case 0x38fe6cu: goto label_38fe6c;
        case 0x38fe70u: goto label_38fe70;
        case 0x38fe74u: goto label_38fe74;
        case 0x38fe78u: goto label_38fe78;
        case 0x38fe7cu: goto label_38fe7c;
        case 0x38fe80u: goto label_38fe80;
        case 0x38fe84u: goto label_38fe84;
        case 0x38fe88u: goto label_38fe88;
        case 0x38fe8cu: goto label_38fe8c;
        case 0x38fe90u: goto label_38fe90;
        case 0x38fe94u: goto label_38fe94;
        case 0x38fe98u: goto label_38fe98;
        case 0x38fe9cu: goto label_38fe9c;
        case 0x38fea0u: goto label_38fea0;
        case 0x38fea4u: goto label_38fea4;
        case 0x38fea8u: goto label_38fea8;
        case 0x38feacu: goto label_38feac;
        case 0x38feb0u: goto label_38feb0;
        case 0x38feb4u: goto label_38feb4;
        case 0x38feb8u: goto label_38feb8;
        case 0x38febcu: goto label_38febc;
        case 0x38fec0u: goto label_38fec0;
        case 0x38fec4u: goto label_38fec4;
        case 0x38fec8u: goto label_38fec8;
        case 0x38feccu: goto label_38fecc;
        case 0x38fed0u: goto label_38fed0;
        case 0x38fed4u: goto label_38fed4;
        case 0x38fed8u: goto label_38fed8;
        case 0x38fedcu: goto label_38fedc;
        case 0x38fee0u: goto label_38fee0;
        case 0x38fee4u: goto label_38fee4;
        case 0x38fee8u: goto label_38fee8;
        case 0x38feecu: goto label_38feec;
        case 0x38fef0u: goto label_38fef0;
        case 0x38fef4u: goto label_38fef4;
        case 0x38fef8u: goto label_38fef8;
        case 0x38fefcu: goto label_38fefc;
        case 0x38ff00u: goto label_38ff00;
        case 0x38ff04u: goto label_38ff04;
        case 0x38ff08u: goto label_38ff08;
        case 0x38ff0cu: goto label_38ff0c;
        case 0x38ff10u: goto label_38ff10;
        case 0x38ff14u: goto label_38ff14;
        case 0x38ff18u: goto label_38ff18;
        case 0x38ff1cu: goto label_38ff1c;
        case 0x38ff20u: goto label_38ff20;
        case 0x38ff24u: goto label_38ff24;
        case 0x38ff28u: goto label_38ff28;
        case 0x38ff2cu: goto label_38ff2c;
        case 0x38ff30u: goto label_38ff30;
        case 0x38ff34u: goto label_38ff34;
        case 0x38ff38u: goto label_38ff38;
        case 0x38ff3cu: goto label_38ff3c;
        case 0x38ff40u: goto label_38ff40;
        case 0x38ff44u: goto label_38ff44;
        case 0x38ff48u: goto label_38ff48;
        case 0x38ff4cu: goto label_38ff4c;
        case 0x38ff50u: goto label_38ff50;
        case 0x38ff54u: goto label_38ff54;
        case 0x38ff58u: goto label_38ff58;
        case 0x38ff5cu: goto label_38ff5c;
        case 0x38ff60u: goto label_38ff60;
        case 0x38ff64u: goto label_38ff64;
        default: break;
    }

    ctx->pc = 0x38fcf0u;

label_38fcf0:
    // 0x38fcf0: 0x27bdfb20  addiu       $sp, $sp, -0x4E0
    ctx->pc = 0x38fcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966048));
label_38fcf4:
    // 0x38fcf4: 0x7fb70460  sq          $s7, 0x460($sp)
    ctx->pc = 0x38fcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 23));
label_38fcf8:
    // 0x38fcf8: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x38fcf8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38fcfc:
    // 0x38fcfc: 0xafa60424  sw          $a2, 0x424($sp)
    ctx->pc = 0x38fcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1060), GPR_U32(ctx, 6));
label_38fd00:
    // 0x38fd00: 0x7fb004d0  sq          $s0, 0x4D0($sp)
    ctx->pc = 0x38fd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 16));
label_38fd04:
    // 0x38fd04: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x38fd04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_38fd08:
    // 0x38fd08: 0x7fb104c0  sq          $s1, 0x4C0($sp)
    ctx->pc = 0x38fd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 17));
label_38fd0c:
    // 0x38fd0c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x38fd0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_38fd10:
    // 0x38fd10: 0x7fb204b0  sq          $s2, 0x4B0($sp)
    ctx->pc = 0x38fd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 18));
label_38fd14:
    // 0x38fd14: 0x7fb304a0  sq          $s3, 0x4A0($sp)
    ctx->pc = 0x38fd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 19));
label_38fd18:
    // 0x38fd18: 0x7fb40490  sq          $s4, 0x490($sp)
    ctx->pc = 0x38fd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 20));
label_38fd1c:
    // 0x38fd1c: 0x7fb50480  sq          $s5, 0x480($sp)
    ctx->pc = 0x38fd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 21));
label_38fd20:
    // 0x38fd20: 0x7fb60470  sq          $s6, 0x470($sp)
    ctx->pc = 0x38fd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 22));
label_38fd24:
    // 0x38fd24: 0x7fbe0450  sq          $fp, 0x450($sp)
    ctx->pc = 0x38fd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 30));
label_38fd28:
    // 0x38fd28: 0xffbf0440  sd          $ra, 0x440($sp)
    ctx->pc = 0x38fd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 31));
label_38fd2c:
    // 0x38fd2c: 0xc103468  jal         func_40D1A0
label_38fd30:
    if (ctx->pc == 0x38FD30u) {
        ctx->pc = 0x38FD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD2Cu;
        // 0x38fd30: 0xafa40420  sw          $a0, 0x420($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FD34u;
        goto label_38fd34;
    }
    ctx->pc = 0x38FD2Cu;
    SET_GPR_U32(ctx, 31, 0x38FD34u);
    ctx->pc = 0x38FD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FD2Cu;
    // 0x38fd30: 0xafa40420  sw          $a0, 0x420($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x38FD2Cu, 0x38FD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FD34u;
label_38fd34:
    // 0x38fd34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_38fd38:
    if (ctx->pc == 0x38FD38u) {
        ctx->pc = 0x38FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD34u;
        // 0x38fd38: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FD3Cu;
        goto label_38fd3c;
    }
    ctx->pc = 0x38FD34u;
    {
        const bool branch_taken_0x38fd34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD34u;
        // 0x38fd38: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fd34) {
            ctx->pc = 0x38FD44u;
            goto label_38fd44;
        }
    }
    ctx->pc = 0x38FD3Cu;
label_38fd3c:
    // 0x38fd3c: 0x1000007d  b           . + 4 + (0x7D << 2)
label_38fd40:
    if (ctx->pc == 0x38FD40u) {
        ctx->pc = 0x38FD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD3Cu;
        // 0x38fd40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FD44u;
        goto label_38fd44;
    }
    ctx->pc = 0x38FD3Cu;
    {
        const bool branch_taken_0x38fd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD3Cu;
        // 0x38fd40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fd3c) {
            ctx->pc = 0x38FF34u;
            goto label_38ff34;
        }
    }
    ctx->pc = 0x38FD44u;
label_38fd44:
    // 0x38fd44: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x38fd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_38fd48:
    // 0x38fd48: 0x92e50000  lbu         $a1, 0x0($s7)
    ctx->pc = 0x38fd48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_38fd4c:
    // 0x38fd4c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x38fd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_38fd50:
    // 0x38fd50: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
label_38fd54:
    if (ctx->pc == 0x38FD54u) {
        ctx->pc = 0x38FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD50u;
        // 0x38fd54: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FD58u;
        goto label_38fd58;
    }
    ctx->pc = 0x38FD50u;
    {
        const bool branch_taken_0x38fd50 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x38FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD50u;
        // 0x38fd54: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fd50) {
            ctx->pc = 0x38FD6Cu;
            goto label_38fd6c;
        }
    }
    ctx->pc = 0x38FD58u;
label_38fd58:
    // 0x38fd58: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x38fd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_38fd5c:
    // 0x38fd5c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x38fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_38fd60:
    // 0x38fd60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x38fd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_38fd64:
    // 0x38fd64: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_38fd68:
    if (ctx->pc == 0x38FD68u) {
        ctx->pc = 0x38FD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD64u;
        // 0x38fd68: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FD6Cu;
        goto label_38fd6c;
    }
    ctx->pc = 0x38FD64u;
    {
        const bool branch_taken_0x38fd64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD64u;
        // 0x38fd68: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fd64) {
            ctx->pc = 0x38FD90u;
            goto label_38fd90;
        }
    }
    ctx->pc = 0x38FD6Cu;
label_38fd6c:
    // 0x38fd6c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x38fd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_38fd70:
    // 0x38fd70: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
label_38fd74:
    if (ctx->pc == 0x38FD74u) {
        ctx->pc = 0x38FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD70u;
        // 0x38fd74: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FD78u;
        goto label_38fd78;
    }
    ctx->pc = 0x38FD70u;
    {
        const bool branch_taken_0x38fd70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x38FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD70u;
        // 0x38fd74: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fd70) {
            ctx->pc = 0x38FD9Cu;
            goto label_38fd9c;
        }
    }
    ctx->pc = 0x38FD78u;
label_38fd78:
    // 0x38fd78: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x38fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_38fd7c:
    // 0x38fd7c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x38fd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_38fd80:
    // 0x38fd80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x38fd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_38fd84:
    // 0x38fd84: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_38fd88:
    if (ctx->pc == 0x38FD88u) {
        ctx->pc = 0x38FD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD84u;
        // 0x38fd88: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FD8Cu;
        goto label_38fd8c;
    }
    ctx->pc = 0x38FD84u;
    {
        const bool branch_taken_0x38fd84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD84u;
        // 0x38fd88: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fd84) {
            ctx->pc = 0x38FD9Cu;
            goto label_38fd9c;
        }
    }
    ctx->pc = 0x38FD8Cu;
label_38fd8c:
    // 0x38fd8c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x38fd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_38fd90:
    // 0x38fd90: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x38fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_38fd94:
    // 0x38fd94: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x38fd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_38fd98:
    // 0x38fd98: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x38fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_38fd9c:
    // 0x38fd9c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x38fd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_38fda0:
    // 0x38fda0: 0x2450e880  addiu       $s0, $v0, -0x1780
    ctx->pc = 0x38fda0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_38fda4:
    // 0x38fda4: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x38fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_38fda8:
    // 0x38fda8: 0x40f809  jalr        $v0
label_38fdac:
    if (ctx->pc == 0x38FDACu) {
        ctx->pc = 0x38FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FDA8u;
        // 0x38fdac: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FDB0u;
        goto label_38fdb0;
    }
    ctx->pc = 0x38FDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38FDB0u);
        ctx->pc = 0x38FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FDA8u;
        // 0x38fdac: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FDA8u, 0x38FDB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38FDB0u;
label_38fdb0:
    // 0x38fdb0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x38fdb0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38fdb4:
    // 0x38fdb4: 0x12c0005e  beqz        $s6, . + 4 + (0x5E << 2)
label_38fdb8:
    if (ctx->pc == 0x38FDB8u) {
        ctx->pc = 0x38FDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FDB4u;
        // 0x38fdb8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FDBCu;
        goto label_38fdbc;
    }
    ctx->pc = 0x38FDB4u;
    {
        const bool branch_taken_0x38fdb4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FDB4u;
        // 0x38fdb8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fdb4) {
            ctx->pc = 0x38FF30u;
            goto label_38ff30;
        }
    }
    ctx->pc = 0x38FDBCu;
label_38fdbc:
    // 0x38fdbc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x38fdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_38fdc0:
    // 0x38fdc0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x38fdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_38fdc4:
    // 0x38fdc4: 0x26c60010  addiu       $a2, $s6, 0x10
    ctx->pc = 0x38fdc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_38fdc8:
    // 0x38fdc8: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x38fdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_38fdcc:
    // 0x38fdcc: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x38fdccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_38fdd0:
    // 0x38fdd0: 0x97a40004  lhu         $a0, 0x4($sp)
    ctx->pc = 0x38fdd0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
label_38fdd4:
    // 0x38fdd4: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x38fdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_38fdd8:
    // 0x38fdd8: 0x8f82bd50  lw          $v0, -0x42B0($gp)
    ctx->pc = 0x38fdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_38fddc:
    // 0x38fddc: 0xa6c40004  sh          $a0, 0x4($s6)
    ctx->pc = 0x38fddcu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 4), (uint16_t)GPR_U32(ctx, 4));
label_38fde0:
    // 0x38fde0: 0xc3a821  addu        $s5, $a2, $v1
    ctx->pc = 0x38fde0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_38fde4:
    // 0x38fde4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x38fde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_38fde8:
    // 0x38fde8: 0xaec50008  sw          $a1, 0x8($s6)
    ctx->pc = 0x38fde8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 5));
label_38fdec:
    // 0x38fdec: 0xaec0000c  sw          $zero, 0xC($s6)
    ctx->pc = 0x38fdecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 0));
label_38fdf0:
    // 0x38fdf0: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x38fdf0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_38fdf4:
    // 0x38fdf4: 0x8f83bd50  lw          $v1, -0x42B0($gp)
    ctx->pc = 0x38fdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_38fdf8:
    // 0x38fdf8: 0xa6c40006  sh          $a0, 0x6($s6)
    ctx->pc = 0x38fdf8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 6), (uint16_t)GPR_U32(ctx, 4));
label_38fdfc:
    // 0x38fdfc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x38fdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_38fe00:
    // 0x38fe00: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x38fe00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_38fe04:
    // 0x38fe04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38fe04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_38fe08:
    // 0x38fe08: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x38fe08u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_38fe0c:
    // 0x38fe0c: 0x96c30004  lhu         $v1, 0x4($s6)
    ctx->pc = 0x38fe0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
label_38fe10:
    // 0x38fe10: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x38fe10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_38fe14:
    // 0x38fe14: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_38fe18:
    if (ctx->pc == 0x38FE18u) {
        ctx->pc = 0x38FE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FE14u;
        // 0x38fe18: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FE1Cu;
        goto label_38fe1c;
    }
    ctx->pc = 0x38FE14u;
    {
        const bool branch_taken_0x38fe14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FE14u;
        // 0x38fe18: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fe14) {
            ctx->pc = 0x38FF30u;
            goto label_38ff30;
        }
    }
    ctx->pc = 0x38FE1Cu;
label_38fe1c:
    // 0x38fe1c: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x38fe1cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_38fe20:
    // 0x38fe20: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x38fe20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38fe24:
    // 0x38fe24: 0x0  nop
    ctx->pc = 0x38fe24u;
    // NOP
label_38fe28:
    // 0x38fe28: 0x8fa40420  lw          $a0, 0x420($sp)
    ctx->pc = 0x38fe28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
label_38fe2c:
    // 0x38fe2c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x38fe2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_38fe30:
    // 0x38fe30: 0xc103468  jal         func_40D1A0
label_38fe34:
    if (ctx->pc == 0x38FE34u) {
        ctx->pc = 0x38FE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FE30u;
        // 0x38fe34: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FE38u;
        goto label_38fe38;
    }
    ctx->pc = 0x38FE30u;
    SET_GPR_U32(ctx, 31, 0x38FE38u);
    ctx->pc = 0x38FE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FE30u;
    // 0x38fe34: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x38FE30u, 0x38FE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FE38u;
label_38fe38:
    // 0x38fe38: 0x1040ffc0  beqz        $v0, . + 4 + (-0x40 << 2)
label_38fe3c:
    if (ctx->pc == 0x38FE3Cu) {
        ctx->pc = 0x38FE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FE38u;
        // 0x38fe3c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FE40u;
        goto label_38fe40;
    }
    ctx->pc = 0x38FE38u;
    {
        const bool branch_taken_0x38fe38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FE38u;
        // 0x38fe3c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fe38) {
            ctx->pc = 0x38FD3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38fd3c;
        }
    }
    ctx->pc = 0x38FE40u;
label_38fe40:
    // 0x38fe40: 0x8fa40424  lw          $a0, 0x424($sp)
    ctx->pc = 0x38fe40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1060)));
label_38fe44:
    // 0x38fe44: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x38fe44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_38fe48:
    // 0x38fe48: 0xc0e3df2  jal         func_38F7C8
label_38fe4c:
    if (ctx->pc == 0x38FE4Cu) {
        ctx->pc = 0x38FE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FE48u;
        // 0x38fe4c: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FE50u;
        goto label_38fe50;
    }
    ctx->pc = 0x38FE48u;
    SET_GPR_U32(ctx, 31, 0x38FE50u);
    ctx->pc = 0x38FE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FE48u;
    // 0x38fe4c: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F7C8u, 0x38FE48u, 0x38FE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FE50u;
label_38fe50:
    // 0x38fe50: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x38fe50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_38fe54:
    // 0x38fe54: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x38fe54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
label_38fe58:
    // 0x38fe58: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x38fe58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_38fe5c:
    // 0x38fe5c: 0x92e30000  lbu         $v1, 0x0($s7)
    ctx->pc = 0x38fe5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_38fe60:
    // 0x38fe60: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_38fe64:
    if (ctx->pc == 0x38FE64u) {
        ctx->pc = 0x38FE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FE60u;
        // 0x38fe64: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FE68u;
        goto label_38fe68;
    }
    ctx->pc = 0x38FE60u;
    {
        const bool branch_taken_0x38fe60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x38FE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FE60u;
        // 0x38fe64: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fe60) {
            ctx->pc = 0x38FE7Cu;
            goto label_38fe7c;
        }
    }
    ctx->pc = 0x38FE68u;
label_38fe68:
    // 0x38fe68: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x38fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_38fe6c:
    // 0x38fe6c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x38fe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_38fe70:
    // 0x38fe70: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x38fe70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_38fe74:
    // 0x38fe74: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_38fe78:
    if (ctx->pc == 0x38FE78u) {
        ctx->pc = 0x38FE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FE74u;
        // 0x38fe78: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FE7Cu;
        goto label_38fe7c;
    }
    ctx->pc = 0x38FE74u;
    {
        const bool branch_taken_0x38fe74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FE74u;
        // 0x38fe78: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fe74) {
            ctx->pc = 0x38FE98u;
            goto label_38fe98;
        }
    }
    ctx->pc = 0x38FE7Cu;
label_38fe7c:
    // 0x38fe7c: 0x14620029  bne         $v1, $v0, . + 4 + (0x29 << 2)
label_38fe80:
    if (ctx->pc == 0x38FE80u) {
        ctx->pc = 0x38FE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FE7Cu;
        // 0x38fe80: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FE84u;
        goto label_38fe84;
    }
    ctx->pc = 0x38FE7Cu;
    {
        const bool branch_taken_0x38fe7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x38FE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FE7Cu;
        // 0x38fe80: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fe7c) {
            ctx->pc = 0x38FF24u;
            goto label_38ff24;
        }
    }
    ctx->pc = 0x38FE84u;
label_38fe84:
    // 0x38fe84: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x38fe84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_38fe88:
    // 0x38fe88: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x38fe88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_38fe8c:
    // 0x38fe8c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x38fe8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_38fe90:
    // 0x38fe90: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_38fe94:
    if (ctx->pc == 0x38FE94u) {
        ctx->pc = 0x38FE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FE90u;
        // 0x38fe94: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FE98u;
        goto label_38fe98;
    }
    ctx->pc = 0x38FE90u;
    {
        const bool branch_taken_0x38fe90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FE90u;
        // 0x38fe94: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fe90) {
            ctx->pc = 0x38FF24u;
            goto label_38ff24;
        }
    }
    ctx->pc = 0x38FE98u;
label_38fe98:
    // 0x38fe98: 0x8e910004  lw          $s1, 0x4($s4)
    ctx->pc = 0x38fe98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_38fe9c:
    // 0x38fe9c: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
label_38fea0:
    if (ctx->pc == 0x38FEA0u) {
        ctx->pc = 0x38FEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FE9Cu;
        // 0x38fea0: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FEA4u;
        goto label_38fea4;
    }
    ctx->pc = 0x38FE9Cu;
    {
        const bool branch_taken_0x38fe9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FE9Cu;
        // 0x38fea0: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fe9c) {
            ctx->pc = 0x38FF24u;
            goto label_38ff24;
        }
    }
    ctx->pc = 0x38FEA4u;
label_38fea4:
    // 0x38fea4: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x38fea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_38fea8:
    // 0x38fea8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x38fea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_38feac:
    // 0x38feac: 0x0  nop
    ctx->pc = 0x38feacu;
    // NOP
label_38feb0:
    // 0x38feb0: 0x2e220101  sltiu       $v0, $s1, 0x101
    ctx->pc = 0x38feb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
label_38feb4:
    // 0x38feb4: 0x222800b  movn        $s0, $s1, $v0
    ctx->pc = 0x38feb4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
label_38feb8:
    // 0x38feb8: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x38feb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_38febc:
    // 0x38febc: 0x8fa40420  lw          $a0, 0x420($sp)
    ctx->pc = 0x38febcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
label_38fec0:
    // 0x38fec0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x38fec0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38fec4:
    // 0x38fec4: 0x7fa70430  sq          $a3, 0x430($sp)
    ctx->pc = 0x38fec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 7));
label_38fec8:
    // 0x38fec8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38fec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38fecc:
    // 0x38fecc: 0xc103468  jal         func_40D1A0
label_38fed0:
    if (ctx->pc == 0x38FED0u) {
        ctx->pc = 0x38FED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FECCu;
        // 0x38fed0: 0x103080  sll         $a2, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FED4u;
        goto label_38fed4;
    }
    ctx->pc = 0x38FECCu;
    SET_GPR_U32(ctx, 31, 0x38FED4u);
    ctx->pc = 0x38FED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FECCu;
    // 0x38fed0: 0x103080  sll         $a2, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x38FECCu, 0x38FED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FED4u;
label_38fed4:
    // 0x38fed4: 0x1040ff99  beqz        $v0, . + 4 + (-0x67 << 2)
label_38fed8:
    if (ctx->pc == 0x38FED8u) {
        ctx->pc = 0x38FED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FED4u;
        // 0x38fed8: 0x7ba70430  lq          $a3, 0x430($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FEDCu;
        goto label_38fedc;
    }
    ctx->pc = 0x38FED4u;
    {
        const bool branch_taken_0x38fed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FED4u;
        // 0x38fed8: 0x7ba70430  lq          $a3, 0x430($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fed4) {
            ctx->pc = 0x38FD3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38fd3c;
        }
    }
    ctx->pc = 0x38FEDCu;
label_38fedc:
    // 0x38fedc: 0x2308823  subu        $s1, $s1, $s0
    ctx->pc = 0x38fedcu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_38fee0:
    // 0x38fee0: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
label_38fee4:
    if (ctx->pc == 0x38FEE4u) {
        ctx->pc = 0x38FEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FEE0u;
        // 0x38fee4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FEE8u;
        goto label_38fee8;
    }
    ctx->pc = 0x38FEE0u;
    {
        const bool branch_taken_0x38fee0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FEE0u;
        // 0x38fee4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fee0) {
            ctx->pc = 0x38FF18u;
            goto label_38ff18;
        }
    }
    ctx->pc = 0x38FEE8u;
label_38fee8:
    // 0x38fee8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x38fee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38feec:
    // 0x38feec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38feecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38fef0:
    // 0x38fef0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x38fef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_38fef4:
    // 0x38fef4: 0x0  nop
    ctx->pc = 0x38fef4u;
    // NOP
label_38fef8:
    // 0x38fef8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x38fef8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_38fefc:
    // 0x38fefc: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x38fefcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38ff00:
    // 0x38ff00: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x38ff00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_38ff04:
    // 0x38ff04: 0x26b50002  addiu       $s5, $s5, 0x2
    ctx->pc = 0x38ff04u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
label_38ff08:
    // 0x38ff08: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x38ff08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_38ff0c:
    // 0x38ff0c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x38ff0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_38ff10:
    // 0x38ff10: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_38ff14:
    if (ctx->pc == 0x38FF14u) {
        ctx->pc = 0x38FF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FF10u;
        // 0x38ff14: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FF18u;
        goto label_38ff18;
    }
    ctx->pc = 0x38FF10u;
    {
        const bool branch_taken_0x38ff10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FF10u;
        // 0x38ff14: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ff10) {
            ctx->pc = 0x38FEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38fef8;
        }
    }
    ctx->pc = 0x38FF18u;
label_38ff18:
    // 0x38ff18: 0x1620ffe5  bnez        $s1, . + 4 + (-0x1B << 2)
label_38ff1c:
    if (ctx->pc == 0x38FF1Cu) {
        ctx->pc = 0x38FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FF18u;
        // 0x38ff1c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FF20u;
        goto label_38ff20;
    }
    ctx->pc = 0x38FF18u;
    {
        const bool branch_taken_0x38ff18 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FF18u;
        // 0x38ff1c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ff18) {
            ctx->pc = 0x38FEB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38feb0;
        }
    }
    ctx->pc = 0x38FF20u;
label_38ff20:
    // 0x38ff20: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x38ff20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_38ff24:
    // 0x38ff24: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x38ff24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_38ff28:
    // 0x38ff28: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
label_38ff2c:
    if (ctx->pc == 0x38FF2Cu) {
        ctx->pc = 0x38FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FF28u;
        // 0x38ff2c: 0x27deffff  addiu       $fp, $fp, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FF30u;
        goto label_38ff30;
    }
    ctx->pc = 0x38FF28u;
    {
        const bool branch_taken_0x38ff28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FF28u;
        // 0x38ff2c: 0x27deffff  addiu       $fp, $fp, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ff28) {
            ctx->pc = 0x38FE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38fe28;
        }
    }
    ctx->pc = 0x38FF30u;
label_38ff30:
    // 0x38ff30: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x38ff30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_38ff34:
    // 0x38ff34: 0x7bb004d0  lq          $s0, 0x4D0($sp)
    ctx->pc = 0x38ff34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_38ff38:
    // 0x38ff38: 0x7bb104c0  lq          $s1, 0x4C0($sp)
    ctx->pc = 0x38ff38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_38ff3c:
    // 0x38ff3c: 0x7bb204b0  lq          $s2, 0x4B0($sp)
    ctx->pc = 0x38ff3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_38ff40:
    // 0x38ff40: 0x7bb304a0  lq          $s3, 0x4A0($sp)
    ctx->pc = 0x38ff40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_38ff44:
    // 0x38ff44: 0x7bb40490  lq          $s4, 0x490($sp)
    ctx->pc = 0x38ff44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_38ff48:
    // 0x38ff48: 0x7bb50480  lq          $s5, 0x480($sp)
    ctx->pc = 0x38ff48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_38ff4c:
    // 0x38ff4c: 0x7bb60470  lq          $s6, 0x470($sp)
    ctx->pc = 0x38ff4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_38ff50:
    // 0x38ff50: 0x7bb70460  lq          $s7, 0x460($sp)
    ctx->pc = 0x38ff50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_38ff54:
    // 0x38ff54: 0x7bbe0450  lq          $fp, 0x450($sp)
    ctx->pc = 0x38ff54u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_38ff58:
    // 0x38ff58: 0xdfbf0440  ld          $ra, 0x440($sp)
    ctx->pc = 0x38ff58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
label_38ff5c:
    // 0x38ff5c: 0x3e00008  jr          $ra
label_38ff60:
    if (ctx->pc == 0x38FF60u) {
        ctx->pc = 0x38FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FF5Cu;
        // 0x38ff60: 0x27bd04e0  addiu       $sp, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FF64u;
        goto label_38ff64;
    }
    ctx->pc = 0x38FF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FF5Cu;
        // 0x38ff60: 0x27bd04e0  addiu       $sp, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38FF64u;
label_38ff64:
    // 0x38ff64: 0x0  nop
    ctx->pc = 0x38ff64u;
    // NOP
    ctx->pc = 0x38ff68u;
}
