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

// Function: sub_004A6FD0
// Address: 0x4a6fd0 - 0x4a7360
void sub_004A6FD0_0x4a6fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6FD0_0x4a6fd0");
#endif

    switch (ctx->pc) {
        case 0x4a6fd0u: goto label_4a6fd0;
        case 0x4a6fd4u: goto label_4a6fd4;
        case 0x4a6fd8u: goto label_4a6fd8;
        case 0x4a6fdcu: goto label_4a6fdc;
        case 0x4a6fe0u: goto label_4a6fe0;
        case 0x4a6fe4u: goto label_4a6fe4;
        case 0x4a6fe8u: goto label_4a6fe8;
        case 0x4a6fecu: goto label_4a6fec;
        case 0x4a6ff0u: goto label_4a6ff0;
        case 0x4a6ff4u: goto label_4a6ff4;
        case 0x4a6ff8u: goto label_4a6ff8;
        case 0x4a6ffcu: goto label_4a6ffc;
        case 0x4a7000u: goto label_4a7000;
        case 0x4a7004u: goto label_4a7004;
        case 0x4a7008u: goto label_4a7008;
        case 0x4a700cu: goto label_4a700c;
        case 0x4a7010u: goto label_4a7010;
        case 0x4a7014u: goto label_4a7014;
        case 0x4a7018u: goto label_4a7018;
        case 0x4a701cu: goto label_4a701c;
        case 0x4a7020u: goto label_4a7020;
        case 0x4a7024u: goto label_4a7024;
        case 0x4a7028u: goto label_4a7028;
        case 0x4a702cu: goto label_4a702c;
        case 0x4a7030u: goto label_4a7030;
        case 0x4a7034u: goto label_4a7034;
        case 0x4a7038u: goto label_4a7038;
        case 0x4a703cu: goto label_4a703c;
        case 0x4a7040u: goto label_4a7040;
        case 0x4a7044u: goto label_4a7044;
        case 0x4a7048u: goto label_4a7048;
        case 0x4a704cu: goto label_4a704c;
        case 0x4a7050u: goto label_4a7050;
        case 0x4a7054u: goto label_4a7054;
        case 0x4a7058u: goto label_4a7058;
        case 0x4a705cu: goto label_4a705c;
        case 0x4a7060u: goto label_4a7060;
        case 0x4a7064u: goto label_4a7064;
        case 0x4a7068u: goto label_4a7068;
        case 0x4a706cu: goto label_4a706c;
        case 0x4a7070u: goto label_4a7070;
        case 0x4a7074u: goto label_4a7074;
        case 0x4a7078u: goto label_4a7078;
        case 0x4a707cu: goto label_4a707c;
        case 0x4a7080u: goto label_4a7080;
        case 0x4a7084u: goto label_4a7084;
        case 0x4a7088u: goto label_4a7088;
        case 0x4a708cu: goto label_4a708c;
        case 0x4a7090u: goto label_4a7090;
        case 0x4a7094u: goto label_4a7094;
        case 0x4a7098u: goto label_4a7098;
        case 0x4a709cu: goto label_4a709c;
        case 0x4a70a0u: goto label_4a70a0;
        case 0x4a70a4u: goto label_4a70a4;
        case 0x4a70a8u: goto label_4a70a8;
        case 0x4a70acu: goto label_4a70ac;
        case 0x4a70b0u: goto label_4a70b0;
        case 0x4a70b4u: goto label_4a70b4;
        case 0x4a70b8u: goto label_4a70b8;
        case 0x4a70bcu: goto label_4a70bc;
        case 0x4a70c0u: goto label_4a70c0;
        case 0x4a70c4u: goto label_4a70c4;
        case 0x4a70c8u: goto label_4a70c8;
        case 0x4a70ccu: goto label_4a70cc;
        case 0x4a70d0u: goto label_4a70d0;
        case 0x4a70d4u: goto label_4a70d4;
        case 0x4a70d8u: goto label_4a70d8;
        case 0x4a70dcu: goto label_4a70dc;
        case 0x4a70e0u: goto label_4a70e0;
        case 0x4a70e4u: goto label_4a70e4;
        case 0x4a70e8u: goto label_4a70e8;
        case 0x4a70ecu: goto label_4a70ec;
        case 0x4a70f0u: goto label_4a70f0;
        case 0x4a70f4u: goto label_4a70f4;
        case 0x4a70f8u: goto label_4a70f8;
        case 0x4a70fcu: goto label_4a70fc;
        case 0x4a7100u: goto label_4a7100;
        case 0x4a7104u: goto label_4a7104;
        case 0x4a7108u: goto label_4a7108;
        case 0x4a710cu: goto label_4a710c;
        case 0x4a7110u: goto label_4a7110;
        case 0x4a7114u: goto label_4a7114;
        case 0x4a7118u: goto label_4a7118;
        case 0x4a711cu: goto label_4a711c;
        case 0x4a7120u: goto label_4a7120;
        case 0x4a7124u: goto label_4a7124;
        case 0x4a7128u: goto label_4a7128;
        case 0x4a712cu: goto label_4a712c;
        case 0x4a7130u: goto label_4a7130;
        case 0x4a7134u: goto label_4a7134;
        case 0x4a7138u: goto label_4a7138;
        case 0x4a713cu: goto label_4a713c;
        case 0x4a7140u: goto label_4a7140;
        case 0x4a7144u: goto label_4a7144;
        case 0x4a7148u: goto label_4a7148;
        case 0x4a714cu: goto label_4a714c;
        case 0x4a7150u: goto label_4a7150;
        case 0x4a7154u: goto label_4a7154;
        case 0x4a7158u: goto label_4a7158;
        case 0x4a715cu: goto label_4a715c;
        case 0x4a7160u: goto label_4a7160;
        case 0x4a7164u: goto label_4a7164;
        case 0x4a7168u: goto label_4a7168;
        case 0x4a716cu: goto label_4a716c;
        case 0x4a7170u: goto label_4a7170;
        case 0x4a7174u: goto label_4a7174;
        case 0x4a7178u: goto label_4a7178;
        case 0x4a717cu: goto label_4a717c;
        case 0x4a7180u: goto label_4a7180;
        case 0x4a7184u: goto label_4a7184;
        case 0x4a7188u: goto label_4a7188;
        case 0x4a718cu: goto label_4a718c;
        case 0x4a7190u: goto label_4a7190;
        case 0x4a7194u: goto label_4a7194;
        case 0x4a7198u: goto label_4a7198;
        case 0x4a719cu: goto label_4a719c;
        case 0x4a71a0u: goto label_4a71a0;
        case 0x4a71a4u: goto label_4a71a4;
        case 0x4a71a8u: goto label_4a71a8;
        case 0x4a71acu: goto label_4a71ac;
        case 0x4a71b0u: goto label_4a71b0;
        case 0x4a71b4u: goto label_4a71b4;
        case 0x4a71b8u: goto label_4a71b8;
        case 0x4a71bcu: goto label_4a71bc;
        case 0x4a71c0u: goto label_4a71c0;
        case 0x4a71c4u: goto label_4a71c4;
        case 0x4a71c8u: goto label_4a71c8;
        case 0x4a71ccu: goto label_4a71cc;
        case 0x4a71d0u: goto label_4a71d0;
        case 0x4a71d4u: goto label_4a71d4;
        case 0x4a71d8u: goto label_4a71d8;
        case 0x4a71dcu: goto label_4a71dc;
        case 0x4a71e0u: goto label_4a71e0;
        case 0x4a71e4u: goto label_4a71e4;
        case 0x4a71e8u: goto label_4a71e8;
        case 0x4a71ecu: goto label_4a71ec;
        case 0x4a71f0u: goto label_4a71f0;
        case 0x4a71f4u: goto label_4a71f4;
        case 0x4a71f8u: goto label_4a71f8;
        case 0x4a71fcu: goto label_4a71fc;
        case 0x4a7200u: goto label_4a7200;
        case 0x4a7204u: goto label_4a7204;
        case 0x4a7208u: goto label_4a7208;
        case 0x4a720cu: goto label_4a720c;
        case 0x4a7210u: goto label_4a7210;
        case 0x4a7214u: goto label_4a7214;
        case 0x4a7218u: goto label_4a7218;
        case 0x4a721cu: goto label_4a721c;
        case 0x4a7220u: goto label_4a7220;
        case 0x4a7224u: goto label_4a7224;
        case 0x4a7228u: goto label_4a7228;
        case 0x4a722cu: goto label_4a722c;
        case 0x4a7230u: goto label_4a7230;
        case 0x4a7234u: goto label_4a7234;
        case 0x4a7238u: goto label_4a7238;
        case 0x4a723cu: goto label_4a723c;
        case 0x4a7240u: goto label_4a7240;
        case 0x4a7244u: goto label_4a7244;
        case 0x4a7248u: goto label_4a7248;
        case 0x4a724cu: goto label_4a724c;
        case 0x4a7250u: goto label_4a7250;
        case 0x4a7254u: goto label_4a7254;
        case 0x4a7258u: goto label_4a7258;
        case 0x4a725cu: goto label_4a725c;
        case 0x4a7260u: goto label_4a7260;
        case 0x4a7264u: goto label_4a7264;
        case 0x4a7268u: goto label_4a7268;
        case 0x4a726cu: goto label_4a726c;
        case 0x4a7270u: goto label_4a7270;
        case 0x4a7274u: goto label_4a7274;
        case 0x4a7278u: goto label_4a7278;
        case 0x4a727cu: goto label_4a727c;
        case 0x4a7280u: goto label_4a7280;
        case 0x4a7284u: goto label_4a7284;
        case 0x4a7288u: goto label_4a7288;
        case 0x4a728cu: goto label_4a728c;
        case 0x4a7290u: goto label_4a7290;
        case 0x4a7294u: goto label_4a7294;
        case 0x4a7298u: goto label_4a7298;
        case 0x4a729cu: goto label_4a729c;
        case 0x4a72a0u: goto label_4a72a0;
        case 0x4a72a4u: goto label_4a72a4;
        case 0x4a72a8u: goto label_4a72a8;
        case 0x4a72acu: goto label_4a72ac;
        case 0x4a72b0u: goto label_4a72b0;
        case 0x4a72b4u: goto label_4a72b4;
        case 0x4a72b8u: goto label_4a72b8;
        case 0x4a72bcu: goto label_4a72bc;
        case 0x4a72c0u: goto label_4a72c0;
        case 0x4a72c4u: goto label_4a72c4;
        case 0x4a72c8u: goto label_4a72c8;
        case 0x4a72ccu: goto label_4a72cc;
        case 0x4a72d0u: goto label_4a72d0;
        case 0x4a72d4u: goto label_4a72d4;
        case 0x4a72d8u: goto label_4a72d8;
        case 0x4a72dcu: goto label_4a72dc;
        case 0x4a72e0u: goto label_4a72e0;
        case 0x4a72e4u: goto label_4a72e4;
        case 0x4a72e8u: goto label_4a72e8;
        case 0x4a72ecu: goto label_4a72ec;
        case 0x4a72f0u: goto label_4a72f0;
        case 0x4a72f4u: goto label_4a72f4;
        case 0x4a72f8u: goto label_4a72f8;
        case 0x4a72fcu: goto label_4a72fc;
        case 0x4a7300u: goto label_4a7300;
        case 0x4a7304u: goto label_4a7304;
        case 0x4a7308u: goto label_4a7308;
        case 0x4a730cu: goto label_4a730c;
        case 0x4a7310u: goto label_4a7310;
        case 0x4a7314u: goto label_4a7314;
        case 0x4a7318u: goto label_4a7318;
        case 0x4a731cu: goto label_4a731c;
        case 0x4a7320u: goto label_4a7320;
        case 0x4a7324u: goto label_4a7324;
        case 0x4a7328u: goto label_4a7328;
        case 0x4a732cu: goto label_4a732c;
        case 0x4a7330u: goto label_4a7330;
        case 0x4a7334u: goto label_4a7334;
        case 0x4a7338u: goto label_4a7338;
        case 0x4a733cu: goto label_4a733c;
        case 0x4a7340u: goto label_4a7340;
        case 0x4a7344u: goto label_4a7344;
        case 0x4a7348u: goto label_4a7348;
        case 0x4a734cu: goto label_4a734c;
        case 0x4a7350u: goto label_4a7350;
        case 0x4a7354u: goto label_4a7354;
        case 0x4a7358u: goto label_4a7358;
        case 0x4a735cu: goto label_4a735c;
        default: break;
    }

    ctx->pc = 0x4a6fd0u;

label_4a6fd0:
    // 0x4a6fd0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x4a6fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_4a6fd4:
    // 0x4a6fd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a6fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a6fd8:
    // 0x4a6fd8: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x4a6fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_4a6fdc:
    // 0x4a6fdc: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x4a6fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_4a6fe0:
    // 0x4a6fe0: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x4a6fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_4a6fe4:
    // 0x4a6fe4: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x4a6fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_4a6fe8:
    // 0x4a6fe8: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x4a6fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_4a6fec:
    // 0x4a6fec: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x4a6fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_4a6ff0:
    // 0x4a6ff0: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x4a6ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_4a6ff4:
    // 0x4a6ff4: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4a6ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4a6ff8:
    // 0x4a6ff8: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x4a6ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_4a6ffc:
    // 0x4a6ffc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4a6ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_4a7000:
    // 0x4a7000: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x4a7000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_4a7004:
    // 0x4a7004: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a7004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4a7008:
    // 0x4a7008: 0xafa70044  sw          $a3, 0x44($sp)
    ctx->pc = 0x4a7008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 7));
label_4a700c:
    // 0x4a700c: 0x146200c7  bne         $v1, $v0, . + 4 + (0xC7 << 2)
label_4a7010:
    if (ctx->pc == 0x4A7010u) {
        ctx->pc = 0x4A7010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A700Cu;
        // 0x4a7010: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7014u;
        goto label_4a7014;
    }
    ctx->pc = 0x4A700Cu;
    {
        const bool branch_taken_0x4a700c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A7010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A700Cu;
        // 0x4a7010: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a700c) {
            ctx->pc = 0x4A732Cu;
            goto label_4a732c;
        }
    }
    ctx->pc = 0x4A7014u;
label_4a7014:
    // 0x4a7014: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4a7014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4a7018:
    // 0x4a7018: 0x24020804  addiu       $v0, $zero, 0x804
    ctx->pc = 0x4a7018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
label_4a701c:
    // 0x4a701c: 0x146200c4  bne         $v1, $v0, . + 4 + (0xC4 << 2)
label_4a7020:
    if (ctx->pc == 0x4A7020u) {
        ctx->pc = 0x4A7020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A701Cu;
        // 0x4a7020: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7024u;
        goto label_4a7024;
    }
    ctx->pc = 0x4A701Cu;
    {
        const bool branch_taken_0x4a701c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A7020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A701Cu;
        // 0x4a7020: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a701c) {
            ctx->pc = 0x4A7330u;
            goto label_4a7330;
        }
    }
    ctx->pc = 0x4A7024u;
label_4a7024:
    // 0x4a7024: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x4a7024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_4a7028:
    // 0x4a7028: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4a7028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_4a702c:
    // 0x4a702c: 0x24502600  addiu       $s0, $v0, 0x2600
    ctx->pc = 0x4a702cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9728));
label_4a7030:
    // 0x4a7030: 0x8f9eb830  lw          $fp, -0x47D0($gp)
    ctx->pc = 0x4a7030u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948912)));
label_4a7034:
    // 0x4a7034: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x4a7034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4a7038:
    // 0x4a7038: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x4a7038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4a703c:
    // 0x4a703c: 0x6864000f  ldl         $a0, 0xF($v1)
    ctx->pc = 0x4a703cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4a7040:
    // 0x4a7040: 0x6c640008  ldr         $a0, 0x8($v1)
    ctx->pc = 0x4a7040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_4a7044:
    // 0x4a7044: 0x68650017  ldl         $a1, 0x17($v1)
    ctx->pc = 0x4a7044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_4a7048:
    // 0x4a7048: 0x6c650010  ldr         $a1, 0x10($v1)
    ctx->pc = 0x4a7048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4a704c:
    // 0x4a704c: 0x8c660018  lw          $a2, 0x18($v1)
    ctx->pc = 0x4a704cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_4a7050:
    // 0x4a7050: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x4a7050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a7054:
    // 0x4a7054: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x4a7054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a7058:
    // 0x4a7058: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x4a7058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a705c:
    // 0x4a705c: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x4a705cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a7060:
    // 0x4a7060: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x4a7060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a7064:
    // 0x4a7064: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x4a7064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a7068:
    // 0x4a7068: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x4a7068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
label_4a706c:
    // 0x4a706c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x4a706cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4a7070:
    // 0x4a7070: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4a7070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a7074:
    // 0x4a7074: 0xc12a3ec  jal         func_4A8FB0
label_4a7078:
    if (ctx->pc == 0x4A7078u) {
        ctx->pc = 0x4A7078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7074u;
        // 0x4a7078: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A707Cu;
        goto label_4a707c;
    }
    ctx->pc = 0x4A7074u;
    SET_GPR_U32(ctx, 31, 0x4A707Cu);
    ctx->pc = 0x4A7078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7074u;
    // 0x4a7078: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A7074u, 0x4A707Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A707Cu;
label_4a707c:
    // 0x4a707c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_4a7080:
    if (ctx->pc == 0x4A7080u) {
        ctx->pc = 0x4A7080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A707Cu;
        // 0x4a7080: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7084u;
        goto label_4a7084;
    }
    ctx->pc = 0x4A707Cu;
    {
        const bool branch_taken_0x4a707c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A707Cu;
        // 0x4a7080: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a707c) {
            ctx->pc = 0x4A70A4u;
            goto label_4a70a4;
        }
    }
    ctx->pc = 0x4A7084u;
label_4a7084:
    // 0x4a7084: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4a7084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a7088:
    // 0x4a7088: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a7088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4a708c:
    // 0x4a708c: 0xc12a3ec  jal         func_4A8FB0
label_4a7090:
    if (ctx->pc == 0x4A7090u) {
        ctx->pc = 0x4A7090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A708Cu;
        // 0x4a7090: 0x8c440030  lw          $a0, 0x30($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7094u;
        goto label_4a7094;
    }
    ctx->pc = 0x4A708Cu;
    SET_GPR_U32(ctx, 31, 0x4A7094u);
    ctx->pc = 0x4A7090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A708Cu;
    // 0x4a7090: 0x8c440030  lw          $a0, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A708Cu, 0x4A7094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7094u;
label_4a7094:
    // 0x4a7094: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4a7098:
    if (ctx->pc == 0x4A7098u) {
        ctx->pc = 0x4A7098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7094u;
        // 0x4a7098: 0x8f82b834  lw          $v0, -0x47CC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948916)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A709Cu;
        goto label_4a709c;
    }
    ctx->pc = 0x4A7094u;
    {
        const bool branch_taken_0x4a7094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7094u;
        // 0x4a7098: 0x8f82b834  lw          $v0, -0x47CC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948916)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7094) {
            ctx->pc = 0x4A70A8u;
            goto label_4a70a8;
        }
    }
    ctx->pc = 0x4A709Cu;
label_4a709c:
    // 0x4a709c: 0x17c00010  bnez        $fp, . + 4 + (0x10 << 2)
label_4a70a0:
    if (ctx->pc == 0x4A70A0u) {
        ctx->pc = 0x4A70A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A709Cu;
        // 0x4a70a0: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A70A4u;
        goto label_4a70a4;
    }
    ctx->pc = 0x4A709Cu;
    {
        const bool branch_taken_0x4a709c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A70A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A709Cu;
        // 0x4a70a0: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a709c) {
            ctx->pc = 0x4A70E0u;
            goto label_4a70e0;
        }
    }
    ctx->pc = 0x4A70A4u;
label_4a70a4:
    // 0x4a70a4: 0x8f82b834  lw          $v0, -0x47CC($gp)
    ctx->pc = 0x4a70a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948916)));
label_4a70a8:
    // 0x4a70a8: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x4a70a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_4a70ac:
    // 0x4a70ac: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4a70acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4a70b0:
    // 0x4a70b0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_4a70b4:
    if (ctx->pc == 0x4A70B4u) {
        ctx->pc = 0x4A70B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A70B0u;
        // 0x4a70b4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A70B8u;
        goto label_4a70b8;
    }
    ctx->pc = 0x4A70B0u;
    {
        const bool branch_taken_0x4a70b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a70b0) {
            ctx->pc = 0x4A70B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A70B0u;
            // 0x4a70b4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A70CCu;
            goto label_4a70cc;
        }
    }
    ctx->pc = 0x4A70B8u;
label_4a70b8:
    // 0x4a70b8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4a70b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4a70bc:
    // 0x4a70bc: 0xc127ca4  jal         func_49F290
label_4a70c0:
    if (ctx->pc == 0x4A70C0u) {
        ctx->pc = 0x4A70C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A70BCu;
        // 0x4a70c0: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A70C4u;
        goto label_4a70c4;
    }
    ctx->pc = 0x4A70BCu;
    SET_GPR_U32(ctx, 31, 0x4A70C4u);
    ctx->pc = 0x4A70C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A70BCu;
    // 0x4a70c0: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F290u, 0x4A70BCu, 0x4A70C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A70C4u;
label_4a70c4:
    // 0x4a70c4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x4a70c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a70c8:
    // 0x4a70c8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4a70c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4a70cc:
    // 0x4a70cc: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_4a70d0:
    if (ctx->pc == 0x4A70D0u) {
        ctx->pc = 0x4A70D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A70CCu;
        // 0x4a70d0: 0xafbe004c  sw          $fp, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A70D4u;
        goto label_4a70d4;
    }
    ctx->pc = 0x4A70CCu;
    {
        const bool branch_taken_0x4a70cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A70D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A70CCu;
        // 0x4a70d0: 0xafbe004c  sw          $fp, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a70cc) {
            ctx->pc = 0x4A70DCu;
            goto label_4a70dc;
        }
    }
    ctx->pc = 0x4A70D4u;
label_4a70d4:
    // 0x4a70d4: 0x10000096  b           . + 4 + (0x96 << 2)
label_4a70d8:
    if (ctx->pc == 0x4A70D8u) {
        ctx->pc = 0x4A70D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A70D4u;
        // 0x4a70d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A70DCu;
        goto label_4a70dc;
    }
    ctx->pc = 0x4A70D4u;
    {
        const bool branch_taken_0x4a70d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A70D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A70D4u;
        // 0x4a70d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a70d4) {
            ctx->pc = 0x4A7330u;
            goto label_4a7330;
        }
    }
    ctx->pc = 0x4A70DCu;
label_4a70dc:
    // 0x4a70dc: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x4a70dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_4a70e0:
    // 0x4a70e0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4a70e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4a70e4:
    // 0x4a70e4: 0x8c570008  lw          $s7, 0x8($v0)
    ctx->pc = 0x4a70e4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4a70e8:
    // 0x4a70e8: 0x1ae0008b  blez        $s7, . + 4 + (0x8B << 2)
label_4a70ec:
    if (ctx->pc == 0x4A70ECu) {
        ctx->pc = 0x4A70ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A70E8u;
        // 0x4a70ec: 0x8f82b830  lw          $v0, -0x47D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948912)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A70F0u;
        goto label_4a70f0;
    }
    ctx->pc = 0x4A70E8u;
    {
        const bool branch_taken_0x4a70e8 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x4A70ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A70E8u;
        // 0x4a70ec: 0x8f82b830  lw          $v0, -0x47D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a70e8) {
            ctx->pc = 0x4A7318u;
            goto label_4a7318;
        }
    }
    ctx->pc = 0x4A70F0u;
label_4a70f0:
    // 0x4a70f0: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x4a70f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_4a70f4:
    // 0x4a70f4: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
label_4a70f8:
    if (ctx->pc == 0x4A70F8u) {
        ctx->pc = 0x4A70F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A70F4u;
        // 0x4a70f8: 0x2e0982d  daddu       $s3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A70FCu;
        goto label_4a70fc;
    }
    ctx->pc = 0x4A70F4u;
    {
        const bool branch_taken_0x4a70f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A70F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A70F4u;
        // 0x4a70f8: 0x2e0982d  daddu       $s3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a70f4) {
            ctx->pc = 0x4A7114u;
            goto label_4a7114;
        }
    }
    ctx->pc = 0x4A70FCu;
label_4a70fc:
    // 0x4a70fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x4a70fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_4a7100:
    // 0x4a7100: 0x8f93b834  lw          $s3, -0x47CC($gp)
    ctx->pc = 0x4a7100u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948916)));
label_4a7104:
    // 0x4a7104: 0x2e21823  subu        $v1, $s7, $v0
    ctx->pc = 0x4a7104u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_4a7108:
    // 0x4a7108: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x4a7108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4a710c:
    // 0x4a710c: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x4a710cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4a7110:
    // 0x4a7110: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x4a7110u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_4a7114:
    // 0x4a7114: 0xafb30008  sw          $s3, 0x8($sp)
    ctx->pc = 0x4a7114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
label_4a7118:
    // 0x4a7118: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4a7118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a711c:
    // 0x4a711c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x4a711cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_4a7120:
    // 0x4a7120: 0x3c0a02d  daddu       $s4, $fp, $zero
    ctx->pc = 0x4a7120u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4a7124:
    // 0x4a7124: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4a7124u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7128:
    // 0x4a7128: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x4a7128u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4a712c:
    // 0x4a712c: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x4a712cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_4a7130:
    // 0x4a7130: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4a7130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4a7134:
    // 0x4a7134: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x4a7134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_4a7138:
    // 0x4a7138: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_4a713c:
    if (ctx->pc == 0x4A713Cu) {
        ctx->pc = 0x4A713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7138u;
        // 0x4a713c: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7140u;
        goto label_4a7140;
    }
    ctx->pc = 0x4A7138u;
    {
        const bool branch_taken_0x4a7138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7138u;
        // 0x4a713c: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7138) {
            ctx->pc = 0x4A7250u;
            goto label_4a7250;
        }
    }
    ctx->pc = 0x4A7140u;
label_4a7140:
    // 0x4a7140: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x4a7140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4a7144:
    // 0x4a7144: 0x2612002c  addiu       $s2, $s0, 0x2C
    ctx->pc = 0x4a7144u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_4a7148:
    // 0x4a7148: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4a714c:
    if (ctx->pc == 0x4A714Cu) {
        ctx->pc = 0x4A714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7148u;
        // 0x4a714c: 0x3a0a82d  daddu       $s5, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7150u;
        goto label_4a7150;
    }
    ctx->pc = 0x4A7148u;
    {
        const bool branch_taken_0x4a7148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7148u;
        // 0x4a714c: 0x3a0a82d  daddu       $s5, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7148) {
            ctx->pc = 0x4A7158u;
            goto label_4a7158;
        }
    }
    ctx->pc = 0x4A7150u;
label_4a7150:
    // 0x4a7150: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x4a7150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_4a7154:
    // 0x4a7154: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4a7154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_4a7158:
    // 0x4a7158: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x4a7158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_4a715c:
    // 0x4a715c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a715cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4a7160:
    // 0x4a7160: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4a7160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4a7164:
    // 0x4a7164: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x4a7164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4a7168:
    // 0x4a7168: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x4a7168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_4a716c:
    // 0x4a716c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4a716cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a7170:
    // 0x4a7170: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x4a7170u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_4a7174:
    // 0x4a7174: 0xc12930e  jal         func_4A4C38
label_4a7178:
    if (ctx->pc == 0x4A7178u) {
        ctx->pc = 0x4A7178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7174u;
        // 0x4a7178: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A717Cu;
        goto label_4a717c;
    }
    ctx->pc = 0x4A7174u;
    SET_GPR_U32(ctx, 31, 0x4A717Cu);
    ctx->pc = 0x4A7178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7174u;
    // 0x4a7178: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4C38u, 0x4A7174u, 0x4A717Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A717Cu;
label_4a717c:
    // 0x4a717c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4a717cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a7180:
    // 0x4a7180: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a7180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a7184:
    // 0x4a7184: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x4a7184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_4a7188:
    // 0x4a7188: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4a7188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4a718c:
    // 0x4a718c: 0xc12976a  jal         func_4A5DA8
label_4a7190:
    if (ctx->pc == 0x4A7190u) {
        ctx->pc = 0x4A7190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A718Cu;
        // 0x4a7190: 0x519023  subu        $s2, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7194u;
        goto label_4a7194;
    }
    ctx->pc = 0x4A718Cu;
    SET_GPR_U32(ctx, 31, 0x4A7194u);
    ctx->pc = 0x4A7190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A718Cu;
    // 0x4a7190: 0x519023  subu        $s2, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5DA8u, 0x4A718Cu, 0x4A7194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7194u;
label_4a7194:
    // 0x4a7194: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_4a7198:
    if (ctx->pc == 0x4A7198u) {
        ctx->pc = 0x4A7198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7194u;
        // 0x4a7198: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A719Cu;
        goto label_4a719c;
    }
    ctx->pc = 0x4A7194u;
    {
        const bool branch_taken_0x4a7194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A7198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7194u;
        // 0x4a7198: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7194) {
            ctx->pc = 0x4A71B4u;
            goto label_4a71b4;
        }
    }
    ctx->pc = 0x4A719Cu;
label_4a719c:
    // 0x4a719c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a719cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a71a0:
    // 0x4a71a0: 0xc127ca4  jal         func_49F290
label_4a71a4:
    if (ctx->pc == 0x4A71A4u) {
        ctx->pc = 0x4A71A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A71A0u;
        // 0x4a71a4: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A71A8u;
        goto label_4a71a8;
    }
    ctx->pc = 0x4A71A0u;
    SET_GPR_U32(ctx, 31, 0x4A71A8u);
    ctx->pc = 0x4A71A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A71A0u;
    // 0x4a71a4: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F290u, 0x4A71A0u, 0x4A71A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A71A8u;
label_4a71a8:
    // 0x4a71a8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x4a71a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a71ac:
    // 0x4a71ac: 0x12c00028  beqz        $s6, . + 4 + (0x28 << 2)
label_4a71b0:
    if (ctx->pc == 0x4A71B0u) {
        ctx->pc = 0x4A71B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A71ACu;
        // 0x4a71b0: 0x2c0a02d  daddu       $s4, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A71B4u;
        goto label_4a71b4;
    }
    ctx->pc = 0x4A71ACu;
    {
        const bool branch_taken_0x4a71ac = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A71B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A71ACu;
        // 0x4a71b0: 0x2c0a02d  daddu       $s4, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a71ac) {
            ctx->pc = 0x4A7250u;
            goto label_4a7250;
        }
    }
    ctx->pc = 0x4A71B4u;
label_4a71b4:
    // 0x4a71b4: 0x6a040033  ldl         $a0, 0x33($s0)
    ctx->pc = 0x4a71b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4a71b8:
    // 0x4a71b8: 0x6e04002c  ldr         $a0, 0x2C($s0)
    ctx->pc = 0x4a71b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_4a71bc:
    // 0x4a71bc: 0x6a05003b  ldl         $a1, 0x3B($s0)
    ctx->pc = 0x4a71bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_4a71c0:
    // 0x4a71c0: 0x6e050034  ldr         $a1, 0x34($s0)
    ctx->pc = 0x4a71c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4a71c4:
    // 0x4a71c4: 0x6a060043  ldl         $a2, 0x43($s0)
    ctx->pc = 0x4a71c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_4a71c8:
    // 0x4a71c8: 0x6e06003c  ldr         $a2, 0x3C($s0)
    ctx->pc = 0x4a71c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_4a71cc:
    // 0x4a71cc: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x4a71ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_4a71d0:
    // 0x4a71d0: 0xb3a40027  sdl         $a0, 0x27($sp)
    ctx->pc = 0x4a71d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a71d4:
    // 0x4a71d4: 0xb7a40020  sdr         $a0, 0x20($sp)
    ctx->pc = 0x4a71d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a71d8:
    // 0x4a71d8: 0xb3a5002f  sdl         $a1, 0x2F($sp)
    ctx->pc = 0x4a71d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a71dc:
    // 0x4a71dc: 0xb7a50028  sdr         $a1, 0x28($sp)
    ctx->pc = 0x4a71dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a71e0:
    // 0x4a71e0: 0xb3a60037  sdl         $a2, 0x37($sp)
    ctx->pc = 0x4a71e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a71e4:
    // 0x4a71e4: 0xb7a60030  sdr         $a2, 0x30($sp)
    ctx->pc = 0x4a71e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a71e8:
    // 0x4a71e8: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x4a71e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_4a71ec:
    // 0x4a71ec: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4a71ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a71f0:
    // 0x4a71f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a71f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a71f4:
    // 0x4a71f4: 0xafb20028  sw          $s2, 0x28($sp)
    ctx->pc = 0x4a71f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 18));
label_4a71f8:
    // 0x4a71f8: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x4a71f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_4a71fc:
    // 0x4a71fc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x4a71fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4a7200:
    // 0x4a7200: 0x60f809  jalr        $v1
label_4a7204:
    if (ctx->pc == 0x4A7204u) {
        ctx->pc = 0x4A7204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7200u;
        // 0x4a7204: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7208u;
        goto label_4a7208;
    }
    ctx->pc = 0x4A7200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4A7208u);
        ctx->pc = 0x4A7204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7200u;
        // 0x4a7204: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A7200u, 0x4A7208u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A7208u;
label_4a7208:
    // 0x4a7208: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_4a720c:
    if (ctx->pc == 0x4A720Cu) {
        ctx->pc = 0x4A720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7208u;
        // 0x4a720c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7210u;
        goto label_4a7210;
    }
    ctx->pc = 0x4A7208u;
    {
        const bool branch_taken_0x4a7208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7208u;
        // 0x4a720c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7208) {
            ctx->pc = 0x4A7274u;
            goto label_4a7274;
        }
    }
    ctx->pc = 0x4A7210u;
label_4a7210:
    // 0x4a7210: 0x12c00017  beqz        $s6, . + 4 + (0x17 << 2)
label_4a7214:
    if (ctx->pc == 0x4A7214u) {
        ctx->pc = 0x4A7214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7210u;
        // 0x4a7214: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7218u;
        goto label_4a7218;
    }
    ctx->pc = 0x4A7210u;
    {
        const bool branch_taken_0x4a7210 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7210u;
        // 0x4a7214: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7210) {
            ctx->pc = 0x4A7270u;
            goto label_4a7270;
        }
    }
    ctx->pc = 0x4A7218u;
label_4a7218:
    // 0x4a7218: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4a7218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a721c:
    // 0x4a721c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4a721cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4a7220:
    // 0x4a7220: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x4a7220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a7224:
    // 0x4a7224: 0xc128660  jal         func_4A1980
label_4a7228:
    if (ctx->pc == 0x4A7228u) {
        ctx->pc = 0x4A7228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7224u;
        // 0x4a7228: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A722Cu;
        goto label_4a722c;
    }
    ctx->pc = 0x4A7224u;
    SET_GPR_U32(ctx, 31, 0x4A722Cu);
    ctx->pc = 0x4A7228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7224u;
    // 0x4a7228: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1980u, 0x4A7224u, 0x4A722Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A722Cu;
label_4a722c:
    // 0x4a722c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_4a7230:
    if (ctx->pc == 0x4A7230u) {
        ctx->pc = 0x4A7230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A722Cu;
        // 0x4a7230: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7234u;
        goto label_4a7234;
    }
    ctx->pc = 0x4A722Cu;
    {
        const bool branch_taken_0x4a722c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A7230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A722Cu;
        // 0x4a7230: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a722c) {
            ctx->pc = 0x4A7258u;
            goto label_4a7258;
        }
    }
    ctx->pc = 0x4A7234u;
label_4a7234:
    // 0x4a7234: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x4a7234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_4a7238:
    // 0x4a7238: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4a723c:
    if (ctx->pc == 0x4A723Cu) {
        ctx->pc = 0x4A7240u;
        goto label_4a7240;
    }
    ctx->pc = 0x4A7238u;
    {
        const bool branch_taken_0x4a7238 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a7238) {
            ctx->pc = 0x4A7248u;
            goto label_4a7248;
        }
    }
    ctx->pc = 0x4A7240u;
label_4a7240:
    // 0x4a7240: 0xc129822  jal         func_4A6088
label_4a7244:
    if (ctx->pc == 0x4A7244u) {
        ctx->pc = 0x4A7244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7240u;
        // 0x4a7244: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7248u;
        goto label_4a7248;
    }
    ctx->pc = 0x4A7240u;
    SET_GPR_U32(ctx, 31, 0x4A7248u);
    ctx->pc = 0x4A7244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7240u;
    // 0x4a7244: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6088u, 0x4A7240u, 0x4A7248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7248u;
label_4a7248:
    // 0x4a7248: 0xc127cae  jal         func_49F2B8
label_4a724c:
    if (ctx->pc == 0x4A724Cu) {
        ctx->pc = 0x4A724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7248u;
        // 0x4a724c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7250u;
        goto label_4a7250;
    }
    ctx->pc = 0x4A7248u;
    SET_GPR_U32(ctx, 31, 0x4A7250u);
    ctx->pc = 0x4A724Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7248u;
    // 0x4a724c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A7248u, 0x4A7250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7250u;
label_4a7250:
    // 0x4a7250: 0x10000008  b           . + 4 + (0x8 << 2)
label_4a7254:
    if (ctx->pc == 0x4A7254u) {
        ctx->pc = 0x4A7254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7250u;
        // 0x4a7254: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7258u;
        goto label_4a7258;
    }
    ctx->pc = 0x4A7250u;
    {
        const bool branch_taken_0x4a7250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7250u;
        // 0x4a7254: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7250) {
            ctx->pc = 0x4A7274u;
            goto label_4a7274;
        }
    }
    ctx->pc = 0x4A7258u;
label_4a7258:
    // 0x4a7258: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_4a725c:
    if (ctx->pc == 0x4A725Cu) {
        ctx->pc = 0x4A7260u;
        goto label_4a7260;
    }
    ctx->pc = 0x4A7258u;
    {
        const bool branch_taken_0x4a7258 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a7258) {
            ctx->pc = 0x4A7268u;
            goto label_4a7268;
        }
    }
    ctx->pc = 0x4A7260u;
label_4a7260:
    // 0x4a7260: 0xc129822  jal         func_4A6088
label_4a7264:
    if (ctx->pc == 0x4A7264u) {
        ctx->pc = 0x4A7264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7260u;
        // 0x4a7264: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7268u;
        goto label_4a7268;
    }
    ctx->pc = 0x4A7260u;
    SET_GPR_U32(ctx, 31, 0x4A7268u);
    ctx->pc = 0x4A7264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7260u;
    // 0x4a7264: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6088u, 0x4A7260u, 0x4A7268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7268u;
label_4a7268:
    // 0x4a7268: 0xc127cae  jal         func_49F2B8
label_4a726c:
    if (ctx->pc == 0x4A726Cu) {
        ctx->pc = 0x4A726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7268u;
        // 0x4a726c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7270u;
        goto label_4a7270;
    }
    ctx->pc = 0x4A7268u;
    SET_GPR_U32(ctx, 31, 0x4A7270u);
    ctx->pc = 0x4A726Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7268u;
    // 0x4a726c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A7268u, 0x4A7270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7270u;
label_4a7270:
    // 0x4a7270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a7270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a7274:
    // 0x4a7274: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_4a7278:
    if (ctx->pc == 0x4A7278u) {
        ctx->pc = 0x4A7278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7274u;
        // 0x4a7278: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A727Cu;
        goto label_4a727c;
    }
    ctx->pc = 0x4A7274u;
    {
        const bool branch_taken_0x4a7274 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A7278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7274u;
        // 0x4a7278: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7274) {
            ctx->pc = 0x4A729Cu;
            goto label_4a729c;
        }
    }
    ctx->pc = 0x4A727Cu;
label_4a727c:
    // 0x4a727c: 0x8f82b830  lw          $v0, -0x47D0($gp)
    ctx->pc = 0x4a727cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948912)));
label_4a7280:
    // 0x4a7280: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x4a7280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_4a7284:
    // 0x4a7284: 0x10c2002a  beq         $a2, $v0, . + 4 + (0x2A << 2)
label_4a7288:
    if (ctx->pc == 0x4A7288u) {
        ctx->pc = 0x4A7288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7284u;
        // 0x4a7288: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A728Cu;
        goto label_4a728c;
    }
    ctx->pc = 0x4A7284u;
    {
        const bool branch_taken_0x4a7284 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A7288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7284u;
        // 0x4a7288: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7284) {
            ctx->pc = 0x4A7330u;
            goto label_4a7330;
        }
    }
    ctx->pc = 0x4A728Cu;
label_4a728c:
    // 0x4a728c: 0xc127cae  jal         func_49F2B8
label_4a7290:
    if (ctx->pc == 0x4A7290u) {
        ctx->pc = 0x4A7290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A728Cu;
        // 0x4a7290: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7294u;
        goto label_4a7294;
    }
    ctx->pc = 0x4A728Cu;
    SET_GPR_U32(ctx, 31, 0x4A7294u);
    ctx->pc = 0x4A7290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A728Cu;
    // 0x4a7290: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A728Cu, 0x4A7294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7294u;
label_4a7294:
    // 0x4a7294: 0x10000026  b           . + 4 + (0x26 << 2)
label_4a7298:
    if (ctx->pc == 0x4A7298u) {
        ctx->pc = 0x4A7298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7294u;
        // 0x4a7298: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A729Cu;
        goto label_4a729c;
    }
    ctx->pc = 0x4A7294u;
    {
        const bool branch_taken_0x4a7294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7294u;
        // 0x4a7298: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7294) {
            ctx->pc = 0x4A7330u;
            goto label_4a7330;
        }
    }
    ctx->pc = 0x4A729Cu;
label_4a729c:
    // 0x4a729c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x4a729cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4a72a0:
    // 0x4a72a0: 0xc12a3ec  jal         func_4A8FB0
label_4a72a4:
    if (ctx->pc == 0x4A72A4u) {
        ctx->pc = 0x4A72A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A72A0u;
        // 0x4a72a4: 0x24452630  addiu       $a1, $v0, 0x2630 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 9776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A72A8u;
        goto label_4a72a8;
    }
    ctx->pc = 0x4A72A0u;
    SET_GPR_U32(ctx, 31, 0x4A72A8u);
    ctx->pc = 0x4A72A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A72A0u;
    // 0x4a72a4: 0x24452630  addiu       $a1, $v0, 0x2630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 9776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A72A0u, 0x4A72A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A72A8u;
label_4a72a8:
    // 0x4a72a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4a72ac:
    if (ctx->pc == 0x4A72ACu) {
        ctx->pc = 0x4A72ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A72A8u;
        // 0x4a72ac: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A72B0u;
        goto label_4a72b0;
    }
    ctx->pc = 0x4A72A8u;
    {
        const bool branch_taken_0x4a72a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A72ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A72A8u;
        // 0x4a72ac: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a72a8) {
            ctx->pc = 0x4A72CCu;
            goto label_4a72cc;
        }
    }
    ctx->pc = 0x4A72B0u;
label_4a72b0:
    // 0x4a72b0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4a72b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4a72b4:
    // 0x4a72b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4a72b8:
    if (ctx->pc == 0x4A72B8u) {
        ctx->pc = 0x4A72B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A72B4u;
        // 0x4a72b8: 0x93a6000c  lbu         $a2, 0xC($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A72BCu;
        goto label_4a72bc;
    }
    ctx->pc = 0x4A72B4u;
    {
        const bool branch_taken_0x4a72b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A72B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A72B4u;
        // 0x4a72b8: 0x93a6000c  lbu         $a2, 0xC($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a72b4) {
            ctx->pc = 0x4A72CCu;
            goto label_4a72cc;
        }
    }
    ctx->pc = 0x4A72BCu;
label_4a72bc:
    // 0x4a72bc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4a72bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4a72c0:
    // 0x4a72c0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4a72c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4a72c4:
    // 0x4a72c4: 0xc12aca0  jal         func_4AB280
label_4a72c8:
    if (ctx->pc == 0x4A72C8u) {
        ctx->pc = 0x4A72C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A72C4u;
        // 0x4a72c8: 0x630c2  srl         $a2, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A72CCu;
        goto label_4a72cc;
    }
    ctx->pc = 0x4A72C4u;
    SET_GPR_U32(ctx, 31, 0x4A72CCu);
    ctx->pc = 0x4A72C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A72C4u;
    // 0x4a72c8: 0x630c2  srl         $a2, $a2, 3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB280u, 0x4A72C4u, 0x4A72CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A72CCu;
label_4a72cc:
    // 0x4a72cc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x4a72ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4a72d0:
    // 0x4a72d0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x4a72d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4a72d4:
    // 0x4a72d4: 0xc10486e  jal         func_4121B8
label_4a72d8:
    if (ctx->pc == 0x4A72D8u) {
        ctx->pc = 0x4A72D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A72D4u;
        // 0x4a72d8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A72DCu;
        goto label_4a72dc;
    }
    ctx->pc = 0x4A72D4u;
    SET_GPR_U32(ctx, 31, 0x4A72DCu);
    ctx->pc = 0x4A72D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A72D4u;
    // 0x4a72d8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x4A72D4u, 0x4A72DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A72DCu;
label_4a72dc:
    // 0x4a72dc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_4a72e0:
    if (ctx->pc == 0x4A72E0u) {
        ctx->pc = 0x4A72E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A72DCu;
        // 0x4a72e0: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A72E4u;
        goto label_4a72e4;
    }
    ctx->pc = 0x4A72DCu;
    {
        const bool branch_taken_0x4a72dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A72E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A72DCu;
        // 0x4a72e0: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a72dc) {
            ctx->pc = 0x4A7304u;
            goto label_4a7304;
        }
    }
    ctx->pc = 0x4A72E4u;
label_4a72e4:
    // 0x4a72e4: 0x8f82b830  lw          $v0, -0x47D0($gp)
    ctx->pc = 0x4a72e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948912)));
label_4a72e8:
    // 0x4a72e8: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x4a72e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_4a72ec:
    // 0x4a72ec: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
label_4a72f0:
    if (ctx->pc == 0x4A72F0u) {
        ctx->pc = 0x4A72F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A72ECu;
        // 0x4a72f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A72F4u;
        goto label_4a72f4;
    }
    ctx->pc = 0x4A72ECu;
    {
        const bool branch_taken_0x4a72ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A72F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A72ECu;
        // 0x4a72f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a72ec) {
            ctx->pc = 0x4A7330u;
            goto label_4a7330;
        }
    }
    ctx->pc = 0x4A72F4u;
label_4a72f4:
    // 0x4a72f4: 0xc127cae  jal         func_49F2B8
label_4a72f8:
    if (ctx->pc == 0x4A72F8u) {
        ctx->pc = 0x4A72FCu;
        goto label_4a72fc;
    }
    ctx->pc = 0x4A72F4u;
    SET_GPR_U32(ctx, 31, 0x4A72FCu);
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A72F4u, 0x4A72FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A72FCu;
label_4a72fc:
    // 0x4a72fc: 0x1000000c  b           . + 4 + (0xC << 2)
label_4a7300:
    if (ctx->pc == 0x4A7300u) {
        ctx->pc = 0x4A7300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A72FCu;
        // 0x4a7300: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7304u;
        goto label_4a7304;
    }
    ctx->pc = 0x4A72FCu;
    {
        const bool branch_taken_0x4a72fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A72FCu;
        // 0x4a7300: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a72fc) {
            ctx->pc = 0x4A7330u;
            goto label_4a7330;
        }
    }
    ctx->pc = 0x4A7304u;
label_4a7304:
    // 0x4a7304: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x4a7304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_4a7308:
    // 0x4a7308: 0xb7102a  slt         $v0, $a1, $s7
    ctx->pc = 0x4a7308u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_4a730c:
    // 0x4a730c: 0x1440ff78  bnez        $v0, . + 4 + (-0x88 << 2)
label_4a7310:
    if (ctx->pc == 0x4A7310u) {
        ctx->pc = 0x4A7310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A730Cu;
        // 0x4a7310: 0xafa50048  sw          $a1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7314u;
        goto label_4a7314;
    }
    ctx->pc = 0x4A730Cu;
    {
        const bool branch_taken_0x4a730c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A7310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A730Cu;
        // 0x4a7310: 0xafa50048  sw          $a1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a730c) {
            ctx->pc = 0x4A70F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a70f0;
        }
    }
    ctx->pc = 0x4A7314u;
label_4a7314:
    // 0x4a7314: 0x8f82b830  lw          $v0, -0x47D0($gp)
    ctx->pc = 0x4a7314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948912)));
label_4a7318:
    // 0x4a7318: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x4a7318u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_4a731c:
    // 0x4a731c: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
label_4a7320:
    if (ctx->pc == 0x4A7320u) {
        ctx->pc = 0x4A7320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A731Cu;
        // 0x4a7320: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7324u;
        goto label_4a7324;
    }
    ctx->pc = 0x4A731Cu;
    {
        const bool branch_taken_0x4a731c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A7320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A731Cu;
        // 0x4a7320: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a731c) {
            ctx->pc = 0x4A7330u;
            goto label_4a7330;
        }
    }
    ctx->pc = 0x4A7324u;
label_4a7324:
    // 0x4a7324: 0xc127cae  jal         func_49F2B8
label_4a7328:
    if (ctx->pc == 0x4A7328u) {
        ctx->pc = 0x4A7328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7324u;
        // 0x4a7328: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A732Cu;
        goto label_4a732c;
    }
    ctx->pc = 0x4A7324u;
    SET_GPR_U32(ctx, 31, 0x4A732Cu);
    ctx->pc = 0x4A7328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7324u;
    // 0x4a7328: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A7324u, 0x4A732Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A732Cu;
label_4a732c:
    // 0x4a732c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x4a732cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_4a7330:
    // 0x4a7330: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x4a7330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_4a7334:
    // 0x4a7334: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x4a7334u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_4a7338:
    // 0x4a7338: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x4a7338u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_4a733c:
    // 0x4a733c: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x4a733cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4a7340:
    // 0x4a7340: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x4a7340u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4a7344:
    // 0x4a7344: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x4a7344u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4a7348:
    // 0x4a7348: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x4a7348u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4a734c:
    // 0x4a734c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4a734cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4a7350:
    // 0x4a7350: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x4a7350u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4a7354:
    // 0x4a7354: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4a7354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4a7358:
    // 0x4a7358: 0x3e00008  jr          $ra
label_4a735c:
    if (ctx->pc == 0x4A735Cu) {
        ctx->pc = 0x4A735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7358u;
        // 0x4a735c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7360u;
        goto label_fallthrough_0x4a7358;
    }
    ctx->pc = 0x4A7358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7358u;
        // 0x4a735c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A7358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4a7358:
    ctx->pc = 0x4A7360u;
}
